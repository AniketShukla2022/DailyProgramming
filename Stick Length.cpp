#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long> vec;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		vec.push_back(k);
	}

	sort(vec.begin(), vec.end());

	int mid = n/2;
	long cost = 0;
	for (int i = 0; i < n; i++)
	{
		cost = cost + abs(vec[mid] - vec[i]);
	}
	cout << cost << endl;
	return 0;
}