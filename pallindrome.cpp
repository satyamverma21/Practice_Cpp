#include <iostream>
using namespace std;

bool pali(int s, int e, string str)
{
    if (s >= e)
        return true;
    if (str[s] != str[e])
        return false;
    return pali(s + 1, e - 1, str);
}

int main()
{
    string str;
    cin >> str;
    if (pali(0, str.size()-1, str))
        cout << "yes";
    else
        cout << "no";

    return 0;
}