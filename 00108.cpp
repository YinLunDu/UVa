#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int pre[105][105];

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, k, l, tmp;

    while (cin >> n) {
        fill(&pre[0][0], &pre[0][0] + 105*105, 0);
        for (i=1; i<=n; i++) {
            for (j=1; j<=n; j++) {
                cin >> tmp;
                pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + tmp;
            }
        }

        int mx = -1e18;
        for (i=1; i<=n; i++) {
            for (j=1; j<=n; j++) {
                for (k=1; k<=n; k++) {
                    for (l=1; l<=n; l++) {
                        if (i > k || j > l) continue;
                        mx = max(mx, pre[k][l] - pre[i-1][l] - pre[k][j-1] + pre[i-1][j-1]);
                    }
                }
            }
        }
        cout << mx << "\n";
    }
    
    return 0;
}