#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define matrix array<array<int, 2>, 2>
using namespace std;

int mod;

matrix mul(matrix a, matrix b)
{
    matrix c;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            c[i][j] = 0;
            for (int k=0; k<2; k++) {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= mod;
            }
        }
    }
    return c;
}

int fast_pow(int a, int b)
{
    int ans = 1, res = a;
    while (b > 0) {
        if (b & 1) ans *= res;
        res *= res;
        b >>= 1;
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;



    while (cin >> n >> m) {
        mod = fast_pow(2, m);

        matrix A, F;

        A[0][0] = 1; A[0][1] = 0; A[1][0] = 0; A[1][1] = 1;

        F[0][0] = 1; F[0][1] = 1; F[1][0] = 1; F[1][1] = 0;
        
        while (n > 0) {
            if (n & 1) A = mul(A, F);
            F = mul(F, F);
            n /= 2;
        }
        cout << A[1][0] << "\n";
    }

    return 0;
}