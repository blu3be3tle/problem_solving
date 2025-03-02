#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fastIO;
    tc
    {
        string s;
        cin >> s;

        if (s == "abc")
            yes;
        if (s == "acb")
            yes;
        if (s == "bac")
            yes;
        if (s == "bca")
            no;
        if (s == "cab")
            no;
        if (s == "cba")
            yes;
    }
    return 0;
}
