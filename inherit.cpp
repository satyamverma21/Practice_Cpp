#include <iostream>
using namespace std;

class human
{
protected:
    int height;

public:
    string species;
    int weight;
    int age;

    int get_age()
    {
        return this->age;
    }
    int get_weight()
    {
        return this->weight;
    }
    int get_height()
    {
        return this->height;
    }
};

class male : protected human
{
public:
    string color;
    int sleep_time;
    int get_sleep_time()
    {
        return this->sleep_time;
    }
    string get_color()
    {
        return this->color;
    }
    int h()
    {
        return this->height;
    }
};

int main()
{
    human m1; // check things it can access using { m1. }
    male m2;  // check things it can access using { m2. }
}