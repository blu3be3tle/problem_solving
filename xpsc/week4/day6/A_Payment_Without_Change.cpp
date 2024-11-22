#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fastIO;
    int q;
    cin >> q;
    while (q--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        ll x = s % n;
        if (x <= b && a * n + b >= s)
            yes;
        else
            no;
    }
    return 0;
}