#include <iostream>
using namespace std;

class base
{
    protected:
    int a;
    int b;

public:
    base(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
      void p(){cout<<"base"<<a<<b ;} ;
    
};

class child1 : public base{
    public:
    child1(int a , int b):base(a ,  b){};
    void p()
    {
        cout<<a<<'-'<<b ;
    }
};

class sub: public child1 {
    public:
    sub(int a , int b) :child1(a,b) {};
    void p()
    {
        cout<<"loest"<<a<<"-"<<b ;
    }

};

int main()
{
    base b(5 ,90);
    sub a(5, 6);
    
    // a.p();
    base *ptr = &a ;
    ptr->p();

}