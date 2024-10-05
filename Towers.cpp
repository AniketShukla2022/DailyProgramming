#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    vector<long> arr(n);
    for (long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    multiset<long> st;

    for (long i = 0; i < n; i++)
    {
        if (st.upper_bound(arr[i]) != st.end())
        {
            auto itr = st.upper_bound(arr[i]);
            st.erase(itr);
        }
        st.insert(arr[i]);
    }
    cout << st.size();
    return 0;

}
