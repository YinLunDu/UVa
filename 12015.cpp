#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

void solve()
{
    string s;
    int x;
    vector <pair <string, int>> v;
    int mx = -1;
    for (int i=1; i<=10; i++) {
        cin >> s >> x;
        bool flag = false;
        
        if (!flag) {
            v.push_back({s, x});
            mx = max(mx, x);
        }
    }

    for (int i=0; i<v.size(); i++) {
        if (v[i].second == mx)
            cout << v[i].first << "\n";
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    
    cin >> t;

    int cnt = 0;

    while (t--) {
        cout << "Case #" << ++cnt << ":" << "\n";
        solve();
    }
    
    return 0;
}