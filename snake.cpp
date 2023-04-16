

#include <iostream>
#include <conio.h>
#include<unistd.h>
#include<stdlib.h>

using namespace std;

class box
{
public:
    string arr[12] = {"--------------------+", "                    |", "                    |", "                    |", "                    |", "                    |", "                    |", "                    |", "                    |", "                    |", "                    |", "--------------------+"};

    void out(string *ptr)
    {
        for (int i = 0; i < 12; i++)
        {
            cout << ptr[i];
            cout << endl;
        }
    }
};




int main()
{
    box a;
    int x = 5, y = 5;
    a.arr[5][5] = '+';
    string *ptr = a.arr;

    char move;

    while (1)
    {
        system("cls");
        a.out(ptr);

        if (_kbhit())
        {
             move = getch() ; 

            a.arr[x][y] = ' ';
            switch (move)
            {
            case 's':

                while(!kbhit()){      a.out(ptr);a.arr[x][y] = ' ';x = ((x) % 10) + 1;system("cls");sleep(0.9); a.arr[x][y] = '*';}
                break;
            case 'w':
                /* code */
                x = (x - 1);
                if (x == 0)
                    x = 10;
                if (x < 0)
                    x *= (-1);

                break;
            case 'a':
                y = (y - 1);
                if (y == -1)
                    y = 19;

                if (y < 0)
                    y *= (-1);
                /* code */
                break;
            case 'd':
                y = (y + 1) % 20;
                /* code */
                break;
            default:
                break;
            }
            a.arr[x][y] = '*';
        }
    }


}

// #include <iostream>
// using namespace std;

// int main() {
//     while (cin.get() != 'x') {
//         cout << "I am running." << endl;
//     }
//     return 0;
// }