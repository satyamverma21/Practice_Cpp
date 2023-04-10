
// C++ program to demonstrate use of kbhit()
#include <iostream>

#include <conio.h>

using namespace std;
int main()
{
    int A;
    cin >> A;
        int b = 0;
    while (1)
    {
        system("cls");
        if (kbhit())
        {
            char a;
            a = getch();
            switch (a)
            {
            case 'w':
                b++;
                break;
            case 's':
                b--;
                break;
            }
        }
        cout << b;
    }
    return 0;
}