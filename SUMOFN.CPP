#include <iostream>
#include <vector>
using namespace std;

int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}

int fibo(int n)
{

    if (n == 2)
        return 1;
    if (n == 1)
        return 0;

    return fibo(n - 1) + fibo(n - 2);
}

int pow(int n, int p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return n;

    return n * pow(n, p - 1);
}

int pow(float n, int p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return n;
    int t = pow(n, p / 2);
    if (p % 2)
        return t * t * n;
    return t * t;
}

int pal(string s, int l, int r)
{
    if (l == r || l > r)
        return 1;
    if (s[l] == s[r])
        return pal(s, l + 1, r - 1);
    else
        return 0;
}

void rev(int *arr, int l , int r)
{
    if (l == r || l > r)
        return ;
    swap(arr[l],arr[r]); 
    rev(arr , l+1 , r-1) ;
}


void powset(vector<vector<int>>v){


}



int main()
{
    // while (1)
    { // int n ; cin>>n ; int p  ; cin>> p ; cout<<"\n\n" ;
        int s[13]={ 1,2 ,3, 4, 6,8,4,61,84,6,8 ,7,3};
        // cin >> s;
     rev(s, 0, 12);

     for(auto i : s)cout<<i<<" " ;
    }
    return 0;
}