#include <bits/stdc++.h>
using namespace std;
// #include <>
//method 1
//TC: theta n
//AS: theta d
void leftRotate(int arr[], int n, int d)
{
	int temp[1000];
	for (int i = 0; i < d; i++)
	{
		temp[i] = arr[i];
	}
	for (int i = d; i < n; i++)
	{
		temp[i - d] = arr[i];
	}
	for (int i = 0; i < d; i++)
	{
		temp[n - d + i] = temp[i];
	}
}

//method 2

void reverse(int arr[], int low, int high)
{
	while (low < high)
	{
		swap(arr[low], arr[high]);
		low++;
		high--;
	}
}

void leftRotate(int arr[], int n, int d)
{
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
}