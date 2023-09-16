#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

void solve()
{
    string s1, s2, tmp;
    getline(cin, s1);
    getline(cin, s2);
    int cnt1 = 0, cnt2 = 0;
    stringstream ss1(s1), ss2(s2);

    string a = "", b = "";
    while (ss1 >> tmp) {
        a += tmp;
        cnt1++;
    }

    while (ss2 >> tmp) {
        b += tmp;
        cnt2++;
    }

    if (a.size() != b.size()) {
        cout << "Wrong Answer\n";
        return;
    }

    bool f = true;

    for (int i=0; i<(int)a.size(); i++) {
        if (a[i] != b[i]) {
            f = false;
            break;
        }
    }

    if (!f) {
        cout << "Wrong Answer\n";
    } else if (cnt1 != cnt2) {
        cout << "Output Format Error\n";
    } else {
        cout << "Yes\n";
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 1, t;
    
    cin >> t;
    cin.ignore();

    while (t--) {
        cout << "Case " << cnt++ << ": ";
        solve();
    }
    
    return 0;
}