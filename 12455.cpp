#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int arr[25];
bool dp[1005];

void solve()
{
    fill(dp, dp + 1005, false);
    int m, n;
    cin >> m >> n;
    dp[0] = true;
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
        for (int j=m; j>=1; j--) {
            if (j - arr[i] < 0) continue;
            dp[j] |= dp[j - arr[i]];
        }
    }
    cout << (dp[m] ? "YES\n" : "NO\n");
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