#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 2000; // i have set salary for each object of this class ;
        cout << "\nenter the id of the employee : ";
        cin >> id;
    }

    void getId(void)
    {
        cout << "\nThe id of the employee : " << id << endl;
    }
};

main()
{
    // Employee satyam , harry ,lovish ;
    Employee ep[5];
    for (int i = 0; i < 5; i++)
    {
        ep[i].setId();
        ep[i].getId();
    }
    return 0;
}