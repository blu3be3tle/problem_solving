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

int main()
{
    fastIO;
    tc
    {
        int n;
        cin >> n;

        while (n >= 3)
        {
            if (n % 4 == 0)
            {
                n = 0;
                break;
            }
            n -= 3;
        }

        cout << (n == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}