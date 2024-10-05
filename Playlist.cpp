#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    vector<long> arr(n);
    for (long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<long> st;
    long left = 0, maxLength = 0;

    for (long right = 0; right < n; right++) {
        while (st.find(arr[right]) != st.end()) {
            st.erase(arr[left]);
            left++;
        }
        st.insert(arr[right]);
        maxLength = max(maxLength, right - left + 1);
    }

    cout << maxLength << endl;
    return 0;
}
