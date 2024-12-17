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
        string s, t;
        cin >> s >> t;
        if (s == t)
        {
            yes;
            continue;
        }

        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                pos = i;
                break;
            }
        }

        if (pos != -1)
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != t[i])
                {
                    if (pos > i)
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok)
                yes;
            else
                no;
        }
        else
            no;
    }
    return 0;
}