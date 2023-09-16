#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

int input[25], arr[25];

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, tmp;
    
    cin >> n;

    for (int i=1; i<=n; i++)
        cin >> input[i];

    while (cin >> tmp) {
        arr[input[1]] = tmp;

        for (int i=2; i<=n; i++) {
            cin >> tmp;
            arr[input[i]] = tmp;
        }

        vector <int> v;

        for (int i=1; i<=n; i++) {
            auto it = upper_bound(v.begin(), v.end(), arr[i]);
            int idx = it - v.begin();
            if (it == v.end())
                v.push_back(arr[i]);
            else
                v[idx] = min(v[idx], arr[i]);
        }

        cout << v.size() << "\n";
    }
    
    return 0;
}