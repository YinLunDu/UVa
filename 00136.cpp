#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i = 1, cnt = 0;

    while (i <= 10000000000) {
        int tmp = i;
        while (tmp % 2 == 0)
            tmp /= 2;
        
        while (tmp % 3 == 0)
            tmp /= 3;
        
        while (tmp % 5 == 0)
            tmp /= 5;
        
        if (tmp == 1) {
            cnt++;
            if (cnt == 1500) break;
        }
        i++;
    }
    cout << "The 1500'th ugly number is " << i << ".\n";

    return 0;
}