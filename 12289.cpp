#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    if (len == 5)
        cout << "3\n";
    else {
        int one = 0;
        if (s[0] == 'o')
            one++;
        if (s[1] == 'n')
            one++;
        if (s[2] == 'e')
            one++;
        if (one >= 2)
            cout << "1\n";
        else
            cout << "2\n";
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