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
        int n, k;
        cin >> n >> k;
        int x = ((n + 1) / 2) - ((n - k + 1) / 2);
        (x % 2 == 0) ? yes : no;
    }
    return 0;
}
