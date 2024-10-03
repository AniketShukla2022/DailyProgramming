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
	//2 9 1 2 7
	sort(vec.begin(), vec.end());
	//1 2 2 7 9
	long ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (ans + 1 < vec[i])
			break;
		else
			ans += vec[i];
	}
	cout << ans + 1 << endl;
	return 0;
}