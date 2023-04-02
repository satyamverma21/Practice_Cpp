#include<iostream>
using namespace std ;
int main()
{
 int marks[4] = {  1 ,2 ,3 , 4 };
 int* p= marks ; 

cout<<"base adress of marks "<<&marks<<endl ;
cout<<"value of pointer "<<*p ;

}