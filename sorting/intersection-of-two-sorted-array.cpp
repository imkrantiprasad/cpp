#include <bits/stdc++.h>
using namespace std;

// O(m*n)

int intersection(int a[], int b[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i > 0 && a[i - 1] == a[i])
            continue;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
                cout << a[i] << " ";
        }
    }
}

//O(m+n)
//O(1)

int intersection(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && i < n)
    {
        if (i > 0 && a[i - 1] == a[i])
            continue;
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}