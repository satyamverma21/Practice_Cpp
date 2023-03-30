#include <iostream>
using namespace std;

class hero
{
public:
    int health;
    string name;
    char level;
    static int time_to_complete;

    hero(string name, int health, char level) // constructor
    {
        cout << "\nconstructer\n";
        this->name = name;
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << "[ name: " << name << " || health: " << health << " || level: " << level << " ]" << endl;
    }

    static int random()
    {
        return time_to_complete;
    }

    ~hero()
    {
        cout << "\ndestructer\n";
    }
};
int hero::time_to_complete = 50;
int main()
{

    // // for static objects -> destructor call automatically ;

    // hero h1("PAUL", 95, 'S');
    // h1.print();

    // // for dynamic objects -> destructor should be called  ;

    // hero *h2 = new hero("ROCKY", 55, 'A');
    // h2->print();
    // delete h2; // way 1

    // h2->~hero(); // way 2 // if u manually created destructor ;

    //_________________________________________________________[ Static ]____________________________________________________________________________________

    // they are shared by all obj .
    cout << hero::time_to_complete;
    hero h1("PAUL", 55, 'S'), h2("RICK", 77, 'A');
h1.time_to_complete=99;
    cout << "RANDOM : " << hero ::random();
}
