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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zeroCount = 0, oneCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
            oneCount++;
        else if (s[i] == '0' && s[i + 1] == '0')
            zeroCount++;
    }
    if (zeroCount == 0 && oneCount == 0)
    {
        yes;
        return;
    }
    if (zeroCount >= 2 || oneCount >= 2)
    {
        no;
        return;
    }
    if (zeroCount == 1 && oneCount == 1)
    {
        yes;
        return;
    }
    if (zeroCount == 1)
    {
        if (s[0] == '1' || s[n - 1] == '1')
            yes;
        else
            no;
    }
    else
    {
        if (s[0] == '0' || s[n - 1] == '0')
            yes;
        else
            no;
    }
}

int main()
{
    fastIO;
    tc
    {
        solve();
    }

    return 0;
}