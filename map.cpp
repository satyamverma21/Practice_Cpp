#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>

using namespace std;

int main()

{
    // vector<int>p = { 1 ,2, 3 ,5,6,8,4,3,5, 5};

    // int arr[5] = {1, 2, 3, 4, 5};
    map<int, int> m;

    m[9] = 90 ; 
    m[8] = 90 ; 
    m[7] = 90 ; 
    m[6] = 90 ; 
    m[5] = 90 ; 
    m[4] = 90 ; 
    m[3] = 90 ; 
    m[2] = 90 ; 
    m[1] = 90 ; 

    for (auto i : m)
        cout << i.first << " " << endl;
}