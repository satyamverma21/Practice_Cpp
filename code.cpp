// image.png
// image.png

// even -- direct
// odd --- swap

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int swap_top(stack<int> stack)
{
    double a = stack.top();
    stack.pop();
    double b = stack.top();
    stack.pop();
    stack.push(a);
    stack.push(b);

    return stack.top();
}

int small(stack<int> &arr)
{
    int x = 99999999;

    // cout << "--" << arr.size();
    if (arr.size() == 2)
    {
        return swap_top(arr);
    }
    if (arr.size() % 2 == 0)
    {
        while (!arr.empty())
        {

            if (x > arr.top())
            {
                x = arr.top();
            }
            arr.pop();
        }
        return x;
    }
    else
    {
        while (arr.size() != 2)
        {
            arr.pop();
        }
        return arr.top();
    }
}

int main()
{

    int test_num;
    long num;
    int rem;

    int smallest;

    stack<int> arr;

    cin >> test_num;
    for (int i = 0; i < test_num; i++)
    {
        cin >> num;
        while (num != 0)
        {
            rem = num % 10;
            arr.push(rem);
            num = num / 10;
        }
        smallest = small(arr);

        cout << smallest << endl;
    }

    return 0;
}