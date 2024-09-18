#include <iostream>
using namespace std;

int main()
{
	long n;
	long sum = 0;
	cin >> n;
	long arr[n - 1];
	for (long i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
		
	long originalSum = (n * (n + 1)) / 2;
	cout<<originalSum - sum<<endl;
	return 0;
}