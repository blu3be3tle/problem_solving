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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1])
                count++;
        }
        cout << count / 2 << endl;
    }
    return 0;
}
