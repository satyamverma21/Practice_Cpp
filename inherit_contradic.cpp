#include <iostream>
using namespace std;

class A
{
public:
    int ab;
    int bc;

    int sum()
    {
        return this->ab + this->bc;
    }
};

class B
{
public:
    int x;
    int y;

    int sum()
    {
        return this->x + this->y;
    }
};

class Z : public A, public B
{
public:
    int oo;
    int pp;

    Z(int o, int p)
    {
        this->oo = o;
        this->pp = p;
    }
};

int main()
{

    Z objZ(888, 112);
    objZ.x = 6;
    objZ.y = 60;
    cout << objZ.B::sum();
}