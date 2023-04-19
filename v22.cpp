#include <iostream>
#include <string>
using namespace std;

// here comes a concept of nesting of functions .  here istead of writing a chk binary function in main we write in display funct ;
// it runn with same arg , as display fun ;
// line number 57 ;


// if i move check binary function from public to private then i can not access it directly in main function  ; 
// only public  fuctions of that class can access it ;

class binary
{

    string s;
    void chk_bin(void);


public:
    void read(void);
    // void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary num ";
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {

        // if (s[i]!='0' && s[i]!='1')
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "\n not a binary \n ";
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    chk_bin();

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{

    binary b;
    b.read();
    // b.chk_bin(); i can not access it directly now ; b'cuz it is pvt now ;
    cout << endl;
    b.display();
    cout << endl;
    b.ones();
    cout << endl;
    b.display();

    return 0;
}