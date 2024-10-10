#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n][2];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}

	int vec1[n] = { 0 };
	int vec2[n] = { 0 };

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if (arr[i][0] <= arr[j][0] && arr[i][1] >= arr[j][1])
				{
					vec1[i] = 1;
					vec2[j] = 1;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << vec1[i] << " ";
	cout << "\n";

	for (int i = 0; i < n; i++)
		cout << vec2[i] << " ";
	return 0;
