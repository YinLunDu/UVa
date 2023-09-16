// #pragma GCC optimize("Ofast,unroll-loops,O3")
#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define F first
#define S second
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define SZ(x) (int)(x).size()
#define ALL(x) (x).begin(),(x).end()
#define loop(i,a,b) for(int i=(a);i<=(b);i++)
#define STL(x) for(auto &HEHE:x) cout << HEHE << " "; cout << "\n";
#define arr0(x,y) loop(HEHE,0,y-1) cout << x[HEHE] << " "; cout << "\n";
#define arr1(x,y) loop(HEHE,1,y) cout << x[HEHE] << " "; cout << "\n";
#define uni(x) (x).resize(unique((x).begin(),(x).end())-(x).begin());
#define unisort(x) sort((x).begin(),(x).end()); uni((x));
using namespace std;
void dbg() {;}
template<class T, class ...U>
void dbg(T a, U ...b) {cout << a << " "; dbg(b...);}
void endline() {cout << "\n";}
ostream& operator <<(ostream& os, const pii& a) { os << "[" << a.F << ", " << a.S << "]"; return os; }
ostream& operator <<(ostream& os, const pair<int, pii>& a) { os << a.F << " : [" << a.S.F << ", " << a.S.S << "]"; return os; }
/// ------- Initialization End -------

int mp[105][105];

bool cmp(int a, int b) { return a > b; }

signed main()
{
    int n;

    vector <int> v;
    for (int i = 2; i <= 100; i++) {
        bool f = true;
        for (int it : v) {
            if (i % it == 0) {
                f = false;
                break;
            }
        }
        if (f) v.push_back(i);
    }

    int prime_amount = v.size();

    loop(i, 1, 100) {
        int tmp = i;
        loop(j, 0, prime_amount - 1) {
            while (tmp % v[j] == 0) {
                mp[i][j]++;
                tmp /= v[j];
            }
            if (tmp == 1)
                break;
        }

/// prefix
        loop(j, 0, prime_amount - 1)
            mp[i][j] += mp[i-1][j];
    }

    while (scanf("%lld", &n)) {
        if (n == 0) break;
        
        vector <int> out;
        loop(i, 0, prime_amount - 1) {
            if (mp[n][i] != 0)
                out.push_back(mp[n][i]);
        }

        sort(ALL(out), cmp);

        int sz = out.size();

        printf("%3lld! =", n);

        int cnt = 0;
        for (int it : out) {
            if (cnt != 0 && cnt % 15 == 0)
                printf("\n      ");
            printf("%3lld", it);
            cnt++;
        }
        printf("\n");
    }

    return 0;
}