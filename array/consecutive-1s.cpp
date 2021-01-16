#include <bits/stdc++.h>
using namespace std;

// 0, 1, 1, 1, 0, 1, 0

int conOnes(int arr[], int n)
{
    int ans = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cur++;
        }
        else
        {
            ans = max(ans, cur);
            cur = 0;
        }
    }
    return ans;
}