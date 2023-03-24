// creating a capsule { class } having protein { variable } and enzyms { functions }
// fully encapsulation : creating all variable - private
// increase security
// create setter and getter to access data / if u not create setter then it will just a read only class

#include <iostream>
using namespace std;

class student
{
    string name;
    int age;
    char section;

public:
    string get_name()
    {
        return name;
    }

    char get_section()
    {
        return section;
    }

    int get_age()
    {
        return age;
    }
    string set_name()
    {
        cout << "\nname : ";
        cin >> name;
    }

    char set_section()
    {
        cout << "\nname : ";
        cin >> name;
    }

    int set_age(int age)
    {
        this->age = age;
    }
};

int main()
{
    student s1;
    s1.set_age(5);
    cout << s1.get_age();
}