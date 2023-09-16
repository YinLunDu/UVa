#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;

string s1 = "HELLO";
string s2 = "HOLA";
string s3 = "HALLO";
string s4 = "BONJOUR";
string s5 = "CIAO";
string s6 = "ZDRAVSTVUJTE";

bool same(string a, string b)
{
    if (a.size() != b.size()) return false;
    for (int i=0; i<a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    string s;
    while (getline(cin, s)) {
        if (s[0] == '#') break;
        cout << "Case " << ++t << ": ";

        if (same(s, s1))
            cout << "ENGLISH\n";
        else if (same(s, s2))
            cout << "SPANISH\n";
        else if (same(s, s3))
            cout << "GERMAN\n";
        else if (same(s, s4))
            cout << "FRENCH\n";
        else if (same(s, s5))
            cout << "ITALIAN\n";
        else if (same(s, s6))
            cout << "RUSSIAN\n";
        else
            cout << "UNKNOWN\n";
    }
    
    return 0;
}