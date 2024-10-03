#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<long> vec;
	
	for (int i=0; i<n; i++)
	{
	    int val;
	    cin>>val;
	    vec.push_back(val);
	}
	
	long sumTillNow = 0;
	long maxSum = INT_MIN;
	for (int i=0; i<n; i++)
	{
	    sumTillNow = sumTillNow + vec[i];
	    maxSum = max(sumTillNow,maxSum);
	    if (sumTillNow < 0)
	        sumTillNow = 0;
	}
	cout<<maxSum<<endl;
	return 0;
}
/*

//Another nice solution, don't need to store values in array/vector, also tells how to store min value for long long

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long maxSum = LLONG_MIN; // Initialize to the smallest possible long long
    long long sumTillNow = 0;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;

        sumTillNow += val; // Accumulate the current sum
        maxSum = max(maxSum, sumTillNow); // Update maxSum if needed

        if (sumTillNow < 0) {
            sumTillNow = 0; // Reset if the current sum is negative
        }
    }

    cout << maxSum << endl; // Output the maximum sum
    return 0;
}
*/
