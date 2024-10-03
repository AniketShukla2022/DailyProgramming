#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> arr;
	for (int i = 0; i < n; i++)
	{
		int k, m;
		cin >> k >> m;
		arr.push_back({ m,k });
	}
	sort(arr.begin(), arr.end());
	int count = 0;
	int l = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i].second >= l)
		{
			count++;
			l = arr[i].first;
		}
	}
	cout << count;
	return 0;
}