//Reverse the array without using another array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++)
        cout << arr[i];
    for(int a = 0, b = n - 1; a < b; a++, b--)
    {
        int t = arr[a];
        arr[a] = arr[b];
        arr[b] = t;
    }
    cout << "\nReversed array" << "\n";
    for(int i = 0; i < n; i++)
        cout << arr[i];
    return 0;
}