
#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int l, int h, int k)
{
	if (l > h) return -1;

	int m = (l+h)/2;
	if (arr[m] == k) return m;

	
	if (arr[l] <= arr[m])
	{
	
		if (k >= arr[l] && k <= arr[mid])
		return search(arr, l, m-1, k);

		return search(arr, m+1, h, k);
	}

	if (k>= arr[m] && k <= arr[h])
		return search(arr, m+1, h, k);

	return search(arr, l, m-1, k);
}

{
	int arr[] = {4, 5, 6, 7, 8, 9m
int main(), 1, 2, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 6;
	int i = search(arr, 0, n-1, k);
	if (i != -1) cout << "Index: " << i << endl;
	else cout << "Key not foundn";
}
