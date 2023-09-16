#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int dp[2005][2005];

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;

    while (getline(cin, s1)) {
        getline(cin, s2);
        int n = s1.size(), m = s2.size();
        
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                if (s1[i-1] == s2[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        cout << dp[n][m] << "\n";
    }
    
    return 0;
}