#include <bits/stdc++.h>
using namespace std;

//naive o(n)
int firstOcc(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

//recursive binary search o(logn)

int firstOcc(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;

    if (arr[mid] > x)
    {
        return firstOcc(arr, low, mid - 1, x);
    }
    else if (arr[mid] < x)
    {
        return firstOcc(arr, mid + 1, high, x);
    }
    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;
        else
            return firstOcc(arr, low, mid - 1, x);
    }
}

//iterative binary search

int firstOcc(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}