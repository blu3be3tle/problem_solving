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
    int A, B, C;
    cin >> A >> B >> C;
    if (A + B > C &&
        B + C > A &&
        A + C > B)
        yes;
    else
        no;
    return 0;
}
