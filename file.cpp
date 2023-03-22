#include <iostream>
#include <fstream>
// using namespace std ;

int main()
{
    std::ofstream f("newfile.txt");
    std::string a = " ullalala"; 
     ;
    f << "hii this file---- is created now"<<a;
    f.close() ;
    return 0 ;
}