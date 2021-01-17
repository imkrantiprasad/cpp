#include <bits/stdc++.h>
using namespace std;

int maxLenOddEven(int arr[], int n)
{
    int res = 1, cur = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            cur++;
        }
        else
        {
            res = max(res, cur);
            cur = 1;
        }
    }
    return res;
}