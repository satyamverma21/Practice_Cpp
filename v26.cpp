#include <iostream>
using namespace std;

// learning -- friend function ;

// making a func. friend of a class , make him accessable to private variable ; line - 23 ;

class Complex
{
    int a, b;

public:
    void SetNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNum()
    {
        cout << "\n number is " << a << "+" << b << "i" << endl;
    }

    friend Complex sumComplex(Complex o1, Complex o2);
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.SetNumber(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    Complex c1, c2, c3;
    c1.SetNumber(10, 20);
    c2.SetNumber(30, 40);

    c1.printNum();
    c2.printNum();

    c3 = sumComplex(c1, c2);
    c3.printNum();

    return 0;
}

/*
 properties of friend function :-
1. note in a scope of class ;
2.it cannot be called from object of a class  , i.e c1.sumComplex , it is wrong  ;
3. it can be invoked without the help of any object
4. usually contains objects as arguments ;
5.can be declared inside private or public section of a class ;
6. it cannot access the member directly with their names , it need object_name.member_name tp access any member ;
*/
