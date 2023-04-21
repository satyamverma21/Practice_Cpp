#include <iostream>
using namespace std;

class Shop
{

    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void showprice(void);
};

void Shop ::setprice()
{
    cout << "enter item id : ";
    cin >> itemid[counter];

    cout << "enter item price : ";
    cin >> itemprice[counter];

    counter++;
}

void Shop :: showprice()
{
    for ( int i = 0 ; i < counter ; i++)
    {
        cout<<"price of item id ["<<itemid[i]<<"] is "<<itemprice[i]<<endl;
    }
}

int main()
{
    Shop dukaan ;
    dukaan.initcounter();
    for (int i = 0; i < 5; i++)
    {
        dukaan.setprice();
    }
    
    dukaan.showprice();
    return 0 ; 

}