#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    while (cin >> n >> m) {
        if (n == -1 && m == -1) break;

        int cnt = (n - m > 0 ? n - m : m - n);
        cout << min(cnt, 100 - cnt) << "\n";
    }
    
    return 0;
}