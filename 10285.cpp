#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int n, m;
int dp[105][105];
int mp[105][105];
bool vis[105][105];

bool inside(int x, int y)
{
    if (1 <= x && x <= n && 1 <= y && y <= m)
        return true;
    else
        return false;
}

int dfs(int x, int y)
{
    if (vis[x][y])
        return dp[x][y];
    
    vis[x][y] = 1;
    
    int dis = 0;

    if (inside(x+1, y))
        if (mp[x][y] > mp[x+1][y])
            dis = max(dis, dfs(x+1, y));

    if (inside(x, y+1))
        if (mp[x][y] > mp[x][y+1])
            dis = max(dis, dfs(x, y+1));

    if (inside(x-1, y))
        if (mp[x][y] > mp[x-1][y])
            dis = max(dis, dfs(x-1, y));

    if (inside(x, y-1))
        if (mp[x][y] > mp[x][y-1])
            dis = max(dis, dfs(x, y-1));

    dp[x][y] = dis + 1;

    return dp[x][y];
}

void solve()
{
    string s;
    cin >> s >> n >> m;
    int i, j;

    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            cin >> mp[i][j];

    fill(&dp[0][0], &dp[0][0] + 105*105, 0);
    fill(&vis[0][0], &vis[0][0] + 105*105, 0);

    int mx = 0;
    for (i=1;i<=n;i++) {
        for (j=1;j<=m;j++) {
            if (!vis[i][j])
                mx = max(mx, dfs(i, j));
            else
                mx = max(mx, dp[i][j]);
        }
    }

    cout << s << ": " << mx << "\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
    
    return 0;
}