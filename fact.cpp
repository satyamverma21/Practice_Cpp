#include <iostream>
using namespace std;

// factorial f
int f(int n)
{
    if (n == 0 | n == 1)
        return 1;
    return n * f(n - 1);
}

// power of 2
int p(int n)
{
    if (n == 0)
        return 1;
    return 2 * p(--n);
}

void count(int n)
{
    if (n - 1)
        count(n - 1);
    cout << n << " ";
    return;
}

int fib(int n)
{
    if (!n)
        return 0;
    if (n == 1)
        return 1;
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

bool sort(int arr[], int size)
{

    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;

    else
    {
        bool ans = sort(arr + 1, size - 1);
        return ans;
    }
}

int sumArr(int arr[], int s)
{
    int sum = arr[0];
    if (s == 0)
        return 0;

    return sum + sumArr(arr + 1, s - 1);
}

// int binary()

int linear(int arr[], int s, int k)
{
    if (!s)return 0;
    if(arr[0] == k) return 1 ;
    else linear(arr+1 , s-1 , k);
    
}

int main()
{

    // cout<<f(5)<<":"<<p(5) ;
    // count(50);
    // cout<<fib(6);,

    int arr[15] = {7, 4, 6, 8, 4, 4, 2, 8, 4, 7, 7, 1, 2, 4, 3      };
    //
    cout << linear(arr, 15, 3);

    return 0;
}