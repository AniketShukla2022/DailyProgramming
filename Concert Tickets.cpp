#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	multiset<int> st;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		st.insert(k);
	}
	for (int j = 0; j < m; j++)
	{
		int k;
		cin >> k;
		multiset<int>::iterator it = st.upper_bound(k);
		if (it == st.begin())
			cout << "-1" << endl;
		else
		{
			it--;
			cout << *it << endl;
			st.erase(it);
		}
	}

	return 0;
}
