// #include <bits/stdc++.h0>
#include <iostream>
#include <set>
#define ll long long
using namespace std;

void result();

int main()
{
    int t;
    cin >> t;

    while (t--)

    {
        result();
    }
    return 0;
}
void result()
{
    int n;
    cin >> n;

    int arr[n];
    int x[n + 1];

    int y[n + 1];
    int stre = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        x[i + 1] = -1;
        y[i + 1] = -1;
    }

    int j[n] = {0}, k[n] = {0};

    set<int> s1, s2;

    for (int i = 0; i < n; i++)
    {
        if (x[arr[i]] == -1)
        {
            x[arr[i]] = i;
            j[i] = arr[i];
        }
        else if (y[arr[i]] == -1)
        {
            y[arr[i]] = i;
            k[i] = arr[i];
        }
        else
            stre = 1;
    }

    if (stre == 1)
    {
        cout << "no" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i + 1] == -1)
            s1.insert(i + 1);
        if (y[i + 1] == -1)
            s2.insert(i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        if (j[i] == 0)
        {
            auto it = s1.upper_bound(k[i]);
            if (it == s1.begin())
            {
                stre = 1;
                break;
            }
            else
            {
                it--;
                j[i] = *it;
                s1.erase(it);
            }
        }
        else
        {
            auto it = s2.upper_bound(j[i]);
            if (it == s2.begin())
            {
                stre = 1;
                break;
            }
            else
            {
                it--;
                k[i] = *it;
                s2.erase(it);
            }
        }
    }
    if (stre == 1)
    {
        cout << "no" << endl;
        return;
    }
    cout << "yes\n";
    for (auto i : j)
        cout << i << " ";
    cout << endl;
    for (auto i : k)
        cout << i << " ";
    cout << endl;
}