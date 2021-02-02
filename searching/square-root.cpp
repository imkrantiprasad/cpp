#include <bits/stdc++.h>
using namespace std;

//theta(sqrt(n))

int sqRoot(int n)
{
    int i = 1;
    while (i * i <= n)
        i++;
    return i - 1;
}

//O(logn)

int sqRoot(int n)
{
    int low = 1, high = n, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int mSq = mid * mid;
        if (mSq == n)
        {
            return mid;
        }
        else if (mSq > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}