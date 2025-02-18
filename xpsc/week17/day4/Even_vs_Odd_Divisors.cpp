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

        int odd = 0, even = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
        if (even > odd)
            cout << 1 << endl;
        else if (even == odd)
            cout << 0 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
