// basic
#include <iostream>
#include <vector>

using namespace std;

void dis(vector<int> arr)
{
    for (int i = 0; i<arr.size(); i++)
    {

        cout << arr[i] << "  ";
    }
}

int main()
{

    vector<int> arr;
    int n;

    for (int i = 0; n != -1; i++)
    {
        cout << "enter num : ";
        cin >> n;
        arr.push_back(n);
    }

    arr.pop_back();// to remove -1 from end

    ```

    dis(arr);

    return 0;
}