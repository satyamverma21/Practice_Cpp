// polymorphism is of two type --  compile-time(static poly)  ///  run-time(dynamic poly)

#include <iostream>
using namespace std;

class A
{
public:
    int a, b;
// compile time 
    void hello() // overloading --  change in parameters
    {
        cout << "HELLO\n";
    }
    void hello(int n)
    {
        cout << "HELLO--" << n << endl; // overloading
    }
    void hello(string n)
    {
        cout << "HELLO--" << n << endl; // overloading
    }

    // operator overloading
    void operator+(A &obj)
    {
        int val1 = this->a;
        int val2 = obj.a;
        cout << "OUTPUT : " << val1 << " - " << val2 << " : " << val1 - val2 << endl;
    }
    
};

int main()
{
    A obj1, obj2, obj3;

    obj3.a = 777;
    obj1.a = 8;
    obj2.a = 4;
    obj1 + obj2;
    obj2.operator+(obj3);
}