#include<iostream>
using namespace std ; 


class Employee
{
    private :
        int a, b, c;

    public :
        int d ,e ;

        void setdata(int a1, int b1 ,int c1 ); // declaration in a class ;
        void getdata( )
        {
            cout<<"value of a "<<a<<endl;
            cout<<"value of b "<<b<<endl;
            cout<<"value of c "<<c<<endl;
            cout<<"value of d "<<d<<endl;
            cout<<"value of e "<<e<<endl;
        }

};

void Employee ::setdata(int a1, int b1 ,int c1 )
{   
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Employee satyam ;
    satyam.setdata(1,2,3);
    // satyam.a=22 i can't do that bcuz , a is a pcgt variable cannot acccess directly ; can be access by only a function of that class ;
    satyam.d=565 ;
    satyam.e=63;
    satyam.getdata();
    return 0 ;

}