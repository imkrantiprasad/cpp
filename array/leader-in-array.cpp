#include <bits/stdc++.h>
using namespace std;

void leader(int arr[], int n)
{
    int cur = arr[n - 1];
    cout << cur;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > cur)
        {
            cur = arr[i];
            cout << cur;
        }
    }
}