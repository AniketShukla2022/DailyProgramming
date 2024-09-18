#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int answer = 1;
	for (int i = 0; i < n; i++)
	{
		answer = 2 * answer % ((int)1e9 + 7);
	}
	cout << answer;
	return 0;
}