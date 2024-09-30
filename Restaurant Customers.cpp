#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<pair<int, bool>> p;
	for (int i = 0; i < n; i++)
	{
		int f, s;
		cin >> f >> s;
		p.push_back({ f, true });
		p.push_back({ s, false });
	}
	sort(p.begin(), p.end());
	int ans = 0, result = 0;
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i].second == true)
		{
			ans++;
			result = max(result, ans);
		}
		else {
			ans--;
		}
	}
	cout << result << endl;
	return 0;
}

/*
8 out of 10 test cases ran
int main()
{
	int n;
	cin >> n;

	vector<pair<int,int>> p;

	for (int i = 0; i < n; i++)
	{
		int f, s;
		cin >> f >> s;
		p.push_back(make_pair(f,s));
	}
	sort(p.begin(), p.end());
	vector<int> a;
	vector<int> b;
	for (auto itr:p)
	{
		a.push_back(itr.first);
		b.push_back(itr.second);
	}

	int count = 1;
	int minele = b[0];
	vector<int>ans;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < minele)
			count++;
		else
		{
			ans.push_back(count);
			count = 1;
			minele = b[i];
		}
		minele = min(minele, b[i]);
	}
	ans.push_back(count);
	cout << *max_element(ans.begin(), ans.end()) << endl;
	return 0;
}*/