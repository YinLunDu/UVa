#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int arr[105];

void solve()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    int n = 0;
    while (ss >> arr[n])
        n++;
    
    int i, j, mx = -1;
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            mx = max(mx, __gcd(arr[i], arr[j]));
        }
    }
    cout << mx << "\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    
    cin >> t;
    cin.ignore();

    while (t--)
        solve();
    
    return 0;
}