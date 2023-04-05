#include <iostream>
using namespace std;

// worked but there is a better way ;

// int power(int num, int pow)
// {
//     if (!pow)
//         return 1;
//     return num * power(num, --pow);
// }

// better way :-log n;

int power(int num, int pow)
{
    if (!pow)
        return 1;
    long long ans = power(num, pow / 2);
    if (pow % 2 == 1)
        return num * ans * ans;
    ;

    return ans * ans;
}

int main()
{
    int num, pow;
    cin >> num >> pow;

    cout << power(num, pow);

    return 0;
}