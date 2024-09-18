#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n;
	cin >> n;
	long count = 0;
	for (long i = 5; n / i >= 1; i *= 5)
	{
		count = count + (n / i);
	}
	cout << count;
	return 0;
}