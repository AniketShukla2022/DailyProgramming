#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	int count = 0;
	for (int i = 0, j=n-1; i < j;)
	{
		while (i<j && arr[i] + arr[j] > x)
			j--;
		if (i >= j)
			break;
		count++;
		i++;
		j--;
	}
	cout << n-count;
	return 0;
}