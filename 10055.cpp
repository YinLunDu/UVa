#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    while (cin >> n >> m)
        cout << (n >= m ? n-m : m-n) << "\n";
    
    return 0;
}