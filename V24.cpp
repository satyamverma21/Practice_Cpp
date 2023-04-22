#include <iostream>
using namespace std;

// a static variable is a varible which is shared by all object ; and what happen when we dont  ;
// here count is like employee roll no .

// this happen when you dont use a static var count in class ; OUTPUT -->
//  enter the id : 4
//  the id of the employee is 4 and employee num is : 1
//  enter the id : 5
//  the id of the employee is 5 and employee num is : 1
//  enter the id : 5
//  the id of the employee is 5 and employee num is : 1
//  enter the id : 65
//  the id of the employee is 65 and employee num is : 1

// COUNT VARIABLE UPDATE ACCORDING TO OBJ ;

// TO MAKE A Common variable we make it a staticc var ;

//---------------------after
// enter the id : 4
// the id of the employee is 4 and employee num is : 1
// enter the id : 5
// the id of the employee is 5 and employee num is : 2
// enter the id : 6
// the id of the employee is 6 and employee num is : 3
// enter the id : 8
// the id of the employee is 8 and employee num is : 4

// int Employee :: count ; we have to declare it outside of class also for memory allocation ;  if u want to give it a initialized value 
// then give it here not in class  ; in class it will give u error ;


class Employee
{

    int id;
    // int count = 0;
    static int count ; // a static int have default value 0 ;

public:
    void setdata(void)
    {
        cout << "enter the id : ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of the employee is " << id << " and employee num is : " << count << endl;
    }
};

int Employee :: count ;

int main()
{
    Employee harry, satya, satyam, sajitya;
    harry.setdata();
    harry.getdata();

    satya.setdata();
    satya.getdata();

    satyam.setdata();
    satyam.getdata();

    sajitya.setdata();
    sajitya.getdata();

    return 0;
}