#include <bits/stdc++.h>
using namespace std;

int maxKSum(int arr[], int n, int k)
{
    int cur = 0;
    for (int i = 0; i < k; i++)
    {
        cur += arr[i];
    }
    int max_sum = cur;
    for (int i = k; i < n; i++)
    {
        cur += (arr[i] - arr[i - k]);
        max_sum = max(max_sum, cur);
    }
    return max_sum;
}