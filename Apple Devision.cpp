#include<bits/stdc++.h>
using namespace std;

long long solve(int index, long* arr, long sum1,long sum2, long n)
{
	if (index == n)
		return abs(sum1 - sum2);
	long ChooseInFirst = solve(index + 1, arr, sum1 + arr[index], sum2, n);
	long ChooseInSecond = solve(index + 1, arr, sum1, sum2 + arr[index], n);
	return min(ChooseInFirst, ChooseInSecond);
}
int main()
{
	int n;
	cin >> n;
	long arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	long ans = solve(0, arr, 0, 0, n);
	cout << ans << endl;
	return 0;
}