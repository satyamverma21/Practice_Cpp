#include <iostream>
using namespace std;

int fibo(int n)
{
    if (!n)
        return 0;
    if (n == 1)
        return 1;

    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 10; i++)
        cout << fibo(i)<<endl;
}