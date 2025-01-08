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
        string a, b;
        cin >> a >> b;

        int sameVal = 0;
        int diffVal = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] == '1' && b[i] == '1')
            {
                sameVal++;
            }
            else if (a[i] == '1' || b[i] == '1')
            {
                diffVal++;
            }
        }

        if (sameVal % 2 == 1)
            yes;
        else
        {
            if (diffVal >= 1)
                yes;
            else
                no;
        }
    }
}