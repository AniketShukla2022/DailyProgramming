#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n;
	cin >> n;
	vector<pair<long, int>> vec;
	
	for (long i = 0; i < n; i++)
	{
		long k;
		cin >> k;
		vec.push_back({ k,i+1 });
	}
	sort(vec.begin(), vec.end());
	long ans = 1;
	long temp = -1;
	for (long i = 0; i < n; i++)
	{
		if (vec[i].second < temp)
			ans++;
		temp = vec[i].second;
	}
	cout << ans << endl;
	return 0;
}

/*
long main()
{
	long n;
	cin >> n;
	vector<long> vec;
	unordered_map<long, long> mp;
	for (long i = 0; i < n; i++)
	{
		long k;
		cin >> k;
		vec.push_back(k);
		mp.insert({ k,i });
	}

	/*
	mp->
	4->0
	2->1
	1->2
	5->3
	3->4
	
	long ans = 0;
	for (long i = 0; i < n; i++)
	{
		if (vec[i] != i + 1)
		{
			long idx = mp[i + 1]; // 2
			mp[vec[i]] = idx; // 
			mp[vec[idx]] = i;
			swap(vec[i], vec[idx]); // 1, 2, 4, 5, 3

			ans++;
			//cout<<"inside for:" << ans<<endl;//1, 2    => 1,2,4,5,3 => 1,2,3,5,4 => 1,2,3,4,5
		}
	}
	cout << ans << endl;
	return 0;
}
*/