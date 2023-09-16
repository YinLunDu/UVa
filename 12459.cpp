#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int f[105];
    f[1] = 1;
    f[2] = 2;
    for (int i=3; i<=80; i++)
        f[i] = f[i-1] + f[i-2];
    int n;
    while (cin >> n) {
        if (!n) break;

        cout << f[n] << "\n";
    }
    
    return 0;
}