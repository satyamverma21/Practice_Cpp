#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(){};
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    node(int arr[])
    {
        static int i = 0 ;
        this->data = arr[0];

        for (int i = 0; i < 8; i++)
        {
            cur.next = new node(arr[i + 1]);
            cur = *(cur.next);
        }
        while (ptr)
        {
            cout << "val-" << ptr->data << endl;
            ptr = ptr->next;
        }
    }
};

int main()
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    node b(a);
    // b.next =nullptr;
    int i = 0;

    return 0;
}