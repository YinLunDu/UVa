#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    bool preput = false, put = false;
    int cnt = 0;
    char ch;

    for (int i=1; i<=n; i++) {
        cin >> ch;
        if (preput) { /// 前一個有放
            preput = false;
            continue;
        }

        if (put) { // 下一個要放
            cnt++;
            put = false;
            preput = true;
            continue;
        }

        if (ch == '.')
            put = true;
    }
    if (put)
        cnt++;
    cout << cnt << "\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, cnt = 1;
    
    cin >> t;

    while (t--) {
        cout << "Case " << cnt++ << ": ";
        solve();
    }
    
    return 0;
}