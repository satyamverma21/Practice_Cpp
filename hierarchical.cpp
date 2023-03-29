#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "inside function 1\n";
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "inside function 2\n";
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "inside function 3\n";
    }
};

class D : public B
{
public:
    void func4()
    {
        cout << "inside function 4\n";
    }
};

class E : public B
{
public:
    void func5()
    {
        cout << "inside function 5\n";
    }
};

class F : public C
{
public:
    void func6()
    {
        cout << "inside function 6\n";
    }
};

class G : public C
{
public:
    void func7()
    {
        cout << "inside function 7\n";
    }
};

int main()
{
    A objA;
    B objB;
    C objC;
    D objD;
    E objE;
    F objF;
    G objG;

    objA.func1(); // class a

    objB.func1(); // class a->b
    objB.func2();

    objC.func1(); // class a->c
    objC.func3();

    objD.func1(); // class a->b->d
    objD.func2();
    objD.func4();

    objE.func1(); // class a->b->e
    objE.func2();
    objE.func5();

    objF.func1(); // class a->c->f
    objF.func3();
    objF.func6();

    objG.func1(); // class a->c->g
    objG.func3();
    objG.func7();
}