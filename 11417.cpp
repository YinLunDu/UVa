#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int arr[505];

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    arr[1] = 0;
    for (int i=2; i<=500; i++) {
        arr[i] = arr[i-1];
        for (int j=1; j<=i-1; j++)
            arr[i] += __gcd(j, i);
    }


    int n;

    while (cin >> n) {
        if (!n) break;
        cout << arr[n] << "\n";
    }
    
    return 0;
}