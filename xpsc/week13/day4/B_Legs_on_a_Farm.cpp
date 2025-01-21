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
        int n;
        cin >> n;
        if (n <= 4)
            cout << 1 << endl;
        else if (n > 4 && n % 4 == 0)
            cout << n / 4 << endl;
        else if (n > 4 && n % 4 == 2)
            cout << (n / 4) + 1 << endl;
    }
    return 0;
}
