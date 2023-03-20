#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cout << "enter i ";
    int k;
    cin >> n;
    int *arr[n];
    int *ptr;

    for (int i = 0; i < n; i++)
    {
        arr[i] = (int *)malloc(sizeof(int));
        cout << "\nhii " << i;
      
    }

    cout << "_____________________________________________________________________________";
    for (int i = 0; i < n; i++)
    {
        // for (int j = 1; j <= 2; j++)
        // {
            cout << endl
                 << *(arr[i] );
        // }
    }
}
