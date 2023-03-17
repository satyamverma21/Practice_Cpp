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
    totalmin = (ehour - (shour + 1));
    totalmin +=  totalmin * 60 + emin;
    cout << "min : " << totalmin << " slot" << totalmin / 20.0 << endl;

    return 0;
}