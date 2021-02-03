#include <bits/stdc++.h>
using namespace std;

//2 pointer approach

bool sumInSortedArray(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        int curSum = arr[left] + arr[right];
        if (curSum == x)
            return true;
        else if (curSum > x)
            right--;
        else
            left++;
    }
    return false;
}