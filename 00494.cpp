#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while (getline(cin, s)) {
        string tmp;
        int cnt = 0;
        
        int idx = 0, len = s.size();
        while (idx < len) {
            if (('A' <= s[idx] && s[idx] <= 'Z') || ('a' <= s[idx] && s[idx] <= 'z')) {
                cnt++;
                while (idx < len && (('A' <= s[idx] && s[idx] <= 'Z') || ('a' <= s[idx] && s[idx] <= 'z')))
                    idx++;
                
            }
            idx++;
        }
        cout << cnt << "\n";
    }
    
    return 0;
}