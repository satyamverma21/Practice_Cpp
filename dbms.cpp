#include <iostream>
#include <map>

#include <fstream>
using namespace std;

class admin
{

    bool access;
    static map<string, string> db;
    static string key;
    static fstream adminfile;

public:
    void checkNewAdmin()
    {
        string pass;
        cout << "TO BE AN ADMIN ENTER MASTER-PASSWORD : ";
        cin >> pass;
        this->access = (pass == db["key"]);
        if (access)
            registerNewAdmin();
        else
            cout << "\n INVALID \n";
    }
    void registerNewAdmin()
    {
        string name;
        cout << "\nENTER USER NAME : ";
        cin >> name;
        cout << "\nENTER PASSWORD : ";
        cin >> db[name];
    }
    void choose()
    {

        cout << "1/ REGISTER AS ADMIN \n 2/ LOGIN AS ADMIN \n";
        int n;
        cin >> n;
        switch (n)
        {
        case 1:
            checkNewAdmin();

            break;
        case 2:
            login();
            break;

        default:
            break;
        }

        system("cls");
    }
    static void setup()
    {
        db["key"] = "masterkey@123" ; 
    }

    void login()
    {
        string usernm, pwd;
        cout << "\nENTER USERNAME : ";
        cin >> usernm;
        if (db.count(usernm) == 0)
        {
            cout << "\nUSERNAME NOT FOUND" << endl;
        }
        else
        {

            cout << "\nENTER PASSWORD MR." << usernm;
            cin >> pwd;
            if (db[usernm] == pwd)
            {
                cout << "\nLOGIN SUCCESSFUL\n";
            }
            else
                cout << "\nwrong password\n";
        }
    }

    void show()
    {
        system("cls");
        cout << "\n___________________________________________________________________\n";

        cout << "ADMIN KEY : " << key << endl;
        cout << "id\t\tpassword";
        for (auto i : this->db)
        {
            cout << i.first << "\t\t" << i.second << endl;
        }

        cout << "\n___________________________________________________________________\n";
    }
};


int main()
{
    admin database;
    database.setup();
    // while (1)
    // {
    //     database.show();
    //     // database.choose();
    // }
    return 0;
}