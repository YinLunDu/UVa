#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int f(int x, int y)
{
    int cnt = 0, tmp;
    tmp = x + y;
    cnt += tmp * (tmp + 1) / 2;
    cnt += x;
    return cnt;
}

void solve()
{
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int cnt1 = f(x1, y1);
    int cnt2 = f(x2, y2);

    cout << (cnt2 - cnt1 > 0 ? cnt2 - cnt1 : cnt1 - cnt2) << "\n";
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