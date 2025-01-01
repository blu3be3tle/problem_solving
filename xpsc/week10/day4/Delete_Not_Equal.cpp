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
        string s;
        cin >> s;

        bool hasZero = false, hasOne = false;
        for (char c : s)
        {
            if (c == '0')
                hasZero = true;
            if (c == '1')
                hasOne = true;
            if (hasZero && hasOne)
                break;
        }

        if (hasZero && hasOne)
            cout << "1" << endl;
        else
            cout << n << endl;
    }

    return 0;
}