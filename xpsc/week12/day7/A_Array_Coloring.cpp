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
        int n, odd = 0, x;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 != 0)
                odd++;
        }
        cout << (odd % 2 == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
