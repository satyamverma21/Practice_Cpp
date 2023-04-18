#include<iostream>
#include<stdarg.h>

int main()
{
int a = 4 ; 
int * b = &a ; 
std::cout<<"value at address of a --"<<*(&a);

return 0 ;


}