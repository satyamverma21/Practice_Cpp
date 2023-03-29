#include <iostream>
#include <string.h>

// in swallow copy you mistakenly sharying same memory  ;
// it generally happens while using pointers ;

//  for deep copy ,  we create our own copy constructor
using namespace std;

class hero
{

private:
    int health;

public:
    char *name;

    char level;

    // constructure ; every time you create a obj its constructer is automatically called ;
    //  as : obj_name.cls_name() ;
    //  it has no return and no input ;

    hero()
    {
        // cout << "\nconstructer is called\n";
    }

    // manual copy constructor // use swallow copy ;
    hero(hero &temp)
    {
        // cout << "manual copy constructor " << endl;
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch  ;
        this->health = temp.health;
        this->level = temp.level;
    }

    // parameterised constructor ;
    // hero(string name, int health, char level)
    // {
    //     this->name = name;
    //     this->health = health;
    //     this->level = level;
    //     // cout << "\npara-constructer is called\n";
    // }

    int get_health() // getter to access the private variable
    {
        return health;
    }

    void set_health(int n) //  setter to set the private variable
    {
        health = n;
    }

    void print()
    {
        cout << "[ name : " << name << " | health : " << health << " | level : " << level << " ]" << endl;
    }

    void setname(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    // hero h1; // static // simple constructor
    // h1.name = "PAUL";
    // h1.level = 'S';
    // h1.set_health(50);

    // hero *h2 = new hero; // dynamic // manually constructed
    // h2->name = "ROCK";
    // h2->level = 'A';
    // h2->set_health(79);

    hero h3; // parameterized constructor
    char nam[7] = "satyam";
    h3.setname(nam);
    h3.print();

    // ----------------------[ swallow copy ]

    hero h4(h3); // copy constructor(default // but can create manually)
    h4.print();

    h3.name[0] = 'k';
    h3.print();
    h4.print();

    return 0;
}