#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    bool flag = 1;
    vector<bool>person(n, 1);
    ll cnt = n;
    while (cnt) {
        for (int i = 0; i < n; i++) {
            if (person[i] and flag == 1) {
                flag = 0;
            }
            else if (person[i] and flag == 0) {
                cout << i + 1 << " ";
                person[i] = 0; cnt--;
                flag = 1;
            }
        }
    }
}