// here we see static funcion
// static function only use static variables ;

#include <iostream>
using namespace std;

class Employee
{

    int id;

    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id : ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of the employee is " << id << " and employee num is : " << count << endl;
    }

    static void getcount(void)
    {
        // this function can not access non static variables ;
        // cout<<id ; // gives error , non static variable ;
        cout<<"count value by getcount --> "<<count<<endl;
    }
};

int Employee ::count;



int main()
{
    Employee harry, satya, satyam, sajitya;
    harry.setdata();
    harry.getdata();

    satya.setdata();
    satya.getdata();

    satyam.setdata();
    satyam.getdata();

    sajitya.setdata();
    sajitya.getdata();

    Employee::getcount();

    return 0;
}