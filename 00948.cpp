#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int f[105], len;
bool arr[105];

void solve()
{
    int n;
    cin >> n;

    cout << n << " = ";

    fill(arr, arr + len, 0);
    bool pre = false;
    for (int i=len-1; i>=0; i--) {
        if (pre == true) {
            pre = false;
            continue;
        } else if (n >= f[i]) {
            n -= f[i];
            arr[i] = true;
            pre = true;
        }
    }
    
    bool output = false;
    
    for (int i=len; i>=0; i--) {
        if (!arr[i] && !output)
            continue;
        else if (!arr[i])
            cout << 0;
        else {
            cout << 1;
            output = true;
        }
    }
    cout << " (fib)\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    len = 2;

    f[0] = 1;
    f[1] = 2;
    while (f[len - 1] + f[len - 2] < 100000000) {
        f[len] = f[len - 1] + f[len - 2];
        len++;
    }

    int t = 1;
    
    cin >> t;

    while (t--)
        solve();
    
    return 0;
}