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
        char a;
        cin >> a;
        bool flag = false;
        string s = "codeforces";
        for (char c : s)
        {
            if (c == a)
                flag = true;
        }
        if (flag)
            yes;
        else
            no;
    }
    return 0;
}
