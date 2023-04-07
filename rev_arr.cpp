#include <iostream>
using namespace std;

void rev(int arr[], int f, int l)
{
    if (f >= l)
        return;

    swap(arr[f], arr[l]);
     
    rev(arr, ++f, --l);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    rev(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}