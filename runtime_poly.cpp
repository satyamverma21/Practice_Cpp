#include <iostream>
using namespace std;
// runtime poly is done only in inheritance
class animal
{
public:
    void speak()
    {
        cout << "Speaking\n";
    }
};
class dog : public animal
{
public:
    void speak()
    {
        cout << "Barking\n";
    }
};

int main()
{
    animal human;
    human.speak();
    dog rocky;
    rocky.speak();
}