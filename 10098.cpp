#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

string s;

void solve()
{
    sort(s.begin(), s.end());

    do {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));

    cout << "\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    
    cin >> t;
    cin.ignore();
    t--;

    while (t--) {
        getline(cin, s);
        solve();
    }
    
    s = "ABCDEFGHI";
    solve();

    return 0;
}


