#include <iostream>

using namespace std;

int main()
{

    int shour, ehour, smin, emin;
    cout << "enter starting timing : ";
    cin >> shour >> smin;
    cout << "enter starting timing : ";
    cin >> ehour >> emin;

    int totalmin = 0;
    totalmin = (ehour - (shour + 1)) * 60;
    totalmin += 60 - smin + emin;
    cout << "min : " << totalmin << " slot" << totalmin / 20.0 << endl;
        int slot = totalmin/20 ;
    int add = 20;
    while (slot--)
    {

        cout << shour << " " << smin << " - ";
        smin += 20;
        if (smin >= 60)
        {
            smin -= 60;
            cout << ++shour << " " << smin << endl;
        }
        else
            cout << shour << " " << smin << endl;
    }

    return 0;
}
