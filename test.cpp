#include <iostream>
using namespace std;

int main()
{

    int numi, numj;
    cin>>numi;

    int *arr[numi];


    for (int i = 0; i < numi; i++)
    {
        cout<<"enter j ---";
        cin>>numj;

        arr[i] = (int *)malloc(sizeof(int));
        for (int j = 1; j <= numj; j++)
        {   printf("j: %d----numj: %d ",j , numj);
            cin>>*(arr[i]+j);
        }
    }
}