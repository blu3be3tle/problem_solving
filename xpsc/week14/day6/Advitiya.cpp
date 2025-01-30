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
const string target = "ADVITIYA";

int main()
{
    fastIO;
    tc
    {
        string s;
        cin >> s;
        int total = 0;
        for (int i = 0; i < 8; ++i)
        {
            int diff = (target[i] - s[i] + 26) % 26;
            total += diff;
        }
        cout << total << endl;
    }
    return 0;
}