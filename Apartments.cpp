#include<bits/stdc++.h>
using namespace std;

int main()
{
	 long n, m, k;
	cin >> n >> m >> k;
	 long desired[n], free[m];

	for ( long i = 0; i < n; i++)
	{
		cin >> desired[i];
	}
	for ( long i = 0; i < m; i++)
	{
		cin >> free[i];
	}
	sort(desired, desired + n);
	sort(free, free + m);
	long count = 0;
	for ( long i = 0, j=0; i < n; i++)
	{
		while (j < m && free[j] < desired[i] - k)
			j++;
		if (j < m && free[j] <= desired[i] + k)
			count++, j++;
	}
	cout << count;
	return 0;
}