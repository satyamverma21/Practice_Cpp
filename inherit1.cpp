//  types of inheritance
// single
// multi level
// multiple
// hierarical
// HYBRID -> more than one type of inheritance

#include <iostream>
using namespace std;

class animal
{
public:
    int age;
    int weight;
    void bark()
    {
        cout << "BARKING" << endl;
    }
};

class human
{
public:
    int color;

    void speak()
    {
        cout << "SPEAKING" << endl;
    }
};

class dog : public animal // single or simple inheritance ;
{
};

class POM : public dog // multi level // animal -> dog -> (POM) ;
{
};

class hybrid : public human, public animal // human -> (hybrid) <- animal
{
};

int main()
{
    dog sheru;  //  single
    POM cheeku; // multi-level

    sheru.bark();
    cheeku.bark();

    hybrid raja; // multiple

    raja.speak();
    raja.bark();

    return 0;
}