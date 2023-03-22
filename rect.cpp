#include<iostream>
using namespace std;

int main()
{

int l=5 , b = 5 ;

for (int i =0; i<l; i++)
{
    for (int j =0; j<b; j++)
    {
        if((i==l-1||i==0)||(j==0||j==b-1)){cout<<"0 ";}
        else{cout<<"  ";}

        
    }
    cout<<"\n";

}
}