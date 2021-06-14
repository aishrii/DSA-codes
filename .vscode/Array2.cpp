//Maximum and mininmum element of the array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 65, 7, 43, 87, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "Minimum element = \t" << arr[0] << "\n";
    cout << "Maximum element = \t" << arr[n-1];
    return 0;
}