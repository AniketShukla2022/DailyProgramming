#include<bits/stdc++.h>
using namespace std;

int main()
{
	string  s;
	cin >> s;
	sort(s.begin(), s.end());
	vector<string> ans;
	int count = 0;
	do {
		count++;
		ans.push_back(s);
	} while (next_permutation(s.begin(),s.end()));
	cout << count << endl;
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}