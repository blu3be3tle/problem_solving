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
        int minus = 0;
        int plus = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
                plus++;
            else
                minus++;
        }
        if (plus >= minus)
            cout << plus - minus << endl;
        else
            cout << minus - plus << endl;
    }
    return 0;
}
