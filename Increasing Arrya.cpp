#include<iostream>
using namespace std;

int main()
{
	long n;
	cin >> n;
	long arr[n];
	for (long i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	long count = 0;

	for (long i = 1; i < n; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			long diff = arr[i - 1] - arr[i];
			count += diff;
			arr[i] = arr[i] + diff;
		}
	}
	cout << count << endl;
	return 0;
}