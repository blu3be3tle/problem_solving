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
        string s;
        cin >> s;
        if (n < 3)
        {
            cout << 0 << endl;
            continue;
        }
        ll countDash = 0, countUS = 0;
        for (char c : s)
        {
            if (c == '-')
                countDash++;
            else
                countUS++;
        }
        if (countDash < 2)
        {
            cout << 0 << endl;
            continue;
        }
        ll maxSubseq = (countDash * countDash) / 4;
        cout << countUS * maxSubseq << endl;
    }
    return 0;
}
