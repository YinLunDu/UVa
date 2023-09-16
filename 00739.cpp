#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

void space()
{
    cout << " ";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cout << "NAME                     SOUNDEX CODE\n";
    int i;

    while (cin >> s) {
        for (i=1; i<=9; i++) space();
        cout << s;
        for (i=1; i<=25 - (int)s.size(); i++) space();
        cout << s[0];

        int cnt = 0;
        
/*
1	B, P, F, V
2	C, S, K, G, J, Q, X, Z
3	D, T
4	L
5	M, N
6	R
*/
        i = 1;
        int pre;
        char c = s[0];

        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || c == 'W' || c == 'H')
            pre = -1; 
        else if (c == 'B' || c == 'P' || c == 'F' || c == 'V')
            pre = 1;
        else if (c == 'D' || c == 'T')
            pre = 3;
        else if (c == 'L')
            pre = 4;
        else if (c == 'M' || c == 'N')
            pre = 5;
        else if (c == 'R')
            pre = 6;
        else
            pre = 2;
            
        while (i < (int)s.size() && cnt < 3) {
            c = s[i++];
            
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' || c == 'W' || c == 'H')
                pre = -1; 
            else if (c == 'B' || c == 'P' || c == 'F' || c == 'V') {
                if (pre == 1) continue;
                cout << 1;
                pre = 1;
                cnt++;
            } else if (c == 'D' || c == 'T') {
                if (pre == 3) continue;
                cout << 3;
                pre = 3;
                cnt++;
            } else if (c == 'L') {
                if (pre == 4) continue;
                cout << 4;
                pre = 4;
                cnt++;
            } else if (c == 'M' || c == 'N') {
                if (pre == 5) continue;
                cout << 5;
                pre = 5;
                cnt++;
            } else if (c == 'R') {
                if (pre == 6) continue;
                cout << 6;
                pre = 6;
                cnt++;
            } else {
                if (pre == 2) continue;
                cout << 2;
                pre = 2;
                cnt++;
            }
        }
        for (i=1; i<=max(0ll, 3 - cnt); i++)
            cout << '0';
        cout << "\n";
    }
    cout << "                   END OF OUTPUT\n";
    
    return 0;
}