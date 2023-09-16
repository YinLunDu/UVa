#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector <int> v;

    while (cin >> n) {
        if (n == 0) break;
        v.clear();
        int cnt = 0;
        while (n > 0) {
            if (n & 1) {v.push_back(1); cnt++;}
            else v.push_back(0);
            n /= 2;
        }
        reverse(v.begin(), v.end());
        cout << "The parity of ";
        for (auto it:v)
            cout << it;
        cout << " is " << cnt << " (mod 2).\n";
    }
    
    return 0;
}