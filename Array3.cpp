//Find "Kth" max and min element of array
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int size, k;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
    scanf("%d", &k);
    sort(arr, arr + size);
    cout << "Kth minimum element = " << arr[k - 1] << "\n";
    for(int i = size - 1, c = 1; i >= 0; i--, c++)
        if(c == k)
            cout << "Kth maximum element = " << arr[i];
    return 0;
}