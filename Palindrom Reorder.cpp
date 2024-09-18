#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int letter[26] = {};
	for (char d:s)
	{
		++letter[d - 'A'];
	}

	int oddCount = 0;
	for (int i = 0; i < 26; i++)
	{
		if (letter[i]&1)
		{
			oddCount++;
		}
	}
	if (oddCount > 1)
	{
		cout << "NO SOLUTION";
		return 0;
	}
	string ans;

	for (int i = 0; i < 26; i++)
	{
		if (letter[i]&1^1)
		{
			for (long j = 0; j < letter[i] / 2; j++)
			{
				ans = ans + (char)('A' + i);
			}
		}
	}

	cout << ans;
	for (int i = 0; i < 26; i++)
	{
		if (letter[i]&1)
		{
			for (long j = 0; j < letter[i]; j++)
			{
				cout << (char)('A' + i);
			}
		}
	}
	reverse(ans.begin(), ans.end());

	cout << ans;
	return 0;
}