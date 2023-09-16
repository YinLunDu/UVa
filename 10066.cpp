#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int a[105], b[105];
int dp[105][105];

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, t = 0;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        for (int i=0; i<n; i++)
            cin >> a[i];
        for (int i=0; i<m; i++)
            cin >> b[i];
        
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                if (a[i-1] == b[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        cout << "Twin Towers #" << ++t << "\n";
        cout << "Number of Tiles : " << dp[n][m] << "\n";
        cout << "\n";
    }
    
    return 0;
}