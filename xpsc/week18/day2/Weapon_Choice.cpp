// https://www.codechef.com/problems/WEPCH

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
        int h, x, y, z, k, a, b, c;
        cin >> h >> x >> y >> z >> k;
        a = ceil((double)h / x);

        if (y * k >= h)
        {
            b = ceil((double)h / y);
        }
        else
        {

            c = ceil((double)(h - (y * k)) / z);
            b = c + k;
        }

        cout << min(a, b) << endl;
    }
    return 0;
}
