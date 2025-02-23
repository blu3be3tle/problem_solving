// https://www.codechef.com/problems/SHORTSPELL

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
        cin >> n >> s;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] > s[i + 1])
            {
                s.erase(i, 1);
                flag = true;
                break;
            }
        }
        if (!flag)
            s.pop_back();
        cout << s << endl;
    }
    return 0;
}
