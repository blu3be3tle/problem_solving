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
        int n, x, swipes = 0;
        string s;
        cin >> n >> x >> s;
        bool valid = true;
        for (char c : s)
        {
            if (c == '1')
                swipes = x;
            else
            {
                swipes--;
                if (swipes < 0)
                {
                    no;
                    valid = false;
                    break;
                }
            }
        }
        if (valid)
            yes;
    }
    return 0;
}
