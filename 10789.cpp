#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

vector <int> prime;

void solve()
{
    string s;
    getline(cin, s);
    map <char, int> m;

    for (char c:s) 
        m[c]++;
    
    bool out = false;
    for (auto [c, cnt]:m) {
        if (binary_search(prime.begin(), prime.end(), cnt)) {
            out = true;
            cout << c;
        }
    }
    if (!out)
        cout << "empty";
    cout << "\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, cnt = 1;
    
    for (int i=2; i<=2000; i++) {
        bool f = false;
        for (int j=2; j*j<=i; j++) {
            if (i % j == 0) {
                f = true;
                break;
            }
        }
        if (!f) prime.push_back(i);
    }


    cin >> t;
    cin.ignore();

    while (t--) {
        cout << "Case " << cnt++ << ": ";
        solve();
    }

    return 0;
}