#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b < c)
        cout << 0 << "\n";
    else {
        int ans = (a + b - 1) / (c - 1);

        cout << ans << "\n";
    }
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