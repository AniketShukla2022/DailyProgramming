#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	vector<pair<int,int>> vec;
	
	for (int i=0; i<n; i++)
	{
	    int val;
	    cin>>val;
	    vec.push_back({val,i+1});
	}
	
	sort(vec.begin(),vec.end());
	
	int i=0, j=n-1;
	
	while (i<j)
	{
	    if (vec[i].first + vec[j].first == x)
	    {
	        cout<<vec[i].second<<" "<<vec[j].second<<endl;
	        return 0;
	    }
	    else if (vec[i].first + vec[j].first < x)
	        i++;
	    else
	        j--;
	}
	cout<<"IMPOSSIBLE"<<endl;
	return 0;
}