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
        string s;
        int x = 0, y = 0;
        bool flag = false;
        cin >> n >> s;
        for (char c : s)
        {
            if (c == 'L')
                x--;
            if (c == 'R')
                x++;
            if (c == 'U')
                y++;
            if (c == 'D')
                y--;

            if (x == 1 && y == 1)
                flag = true;
        }
        if (flag)
            yes;
        else
            no;
    }
    return 0;
}
