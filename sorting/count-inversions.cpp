#include <bits/stdc++.h>
using namespace std;

int countInversion(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
                res++;
        }
    }
    return res;
}