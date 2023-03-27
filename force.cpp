#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << (n + 1) / 2 << "\n";
        for (int i = 0; i < (n + 1) / 2; i++)
        {
            cout << (i * 3 + 1) << " " << (n * 3) - (i * 3 + 1) + 1 << " " << endl;
        }
    }
    return 0;
}