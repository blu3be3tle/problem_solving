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
        string s;
        cin >> s;

        for (int op = 0; op < k; op++)
        {
            bool updated = false;
            for (int i = n - 2; i >= 0; i--)
            {
                if (s[i] == '0' && s[i + 1] == '1')
                {
                    s[i] = '1';
                    updated = true;
                    break;
                }
            }
            if (!updated)
                break;
        }

        int ones = 0;
        for (char c : s)
            if (c == '1')
                ones++;

        cout << ones << endl;
    }
    return 0;
}
