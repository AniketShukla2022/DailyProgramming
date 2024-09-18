#include<iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int maxCount = 1;
	int count = 1;
	int n = s.length();
	for (int i = 1; i < n; i++)
	{
		if (s[i] == s[i - 1])
			count++;
		else
		{
			count = 1;
		}
		maxCount = max(maxCount, count);
	}
	cout << maxCount << endl;
	return 0;
}