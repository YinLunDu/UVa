#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int res = (n / 3) * (m / 3);
    cout << res << "\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    
    cin >> t;

    while (t--)
        solve();
    
    return 0;
}