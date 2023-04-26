#include <iostream>
using namespace std;

class complex
{
    int a, b;
    static int num;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
        num++;
    }

    void setBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        num++;
    }

    void printData()
    {
        cout << "value of a : " << a << endl
             << "value of b : " << b << endl;
    }

    void static totalComplex()
    {
        cout << "\ntotal number of complex are : " << num;
    }
};

int complex::num;

int main()
{
    complex c1, c2, c3;

    c1.setData(4, 5);
    c1.printData();
    c2.setData(10, 20);
    c2.printData();

    c3.setBySum(c1, c2);
    c3.printData();

    complex ::totalComplex();
    return 0;
}