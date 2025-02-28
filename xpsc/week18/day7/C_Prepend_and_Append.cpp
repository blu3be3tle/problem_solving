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

        int l = 0, r = n - 1, ans = n;

        for (int i = 0; i < n; i++)
        {

            while (l <= r)
            {
                if (s[l] != s[r])
                {
                    ans -= 2;
                    l++;
                    r--;
                }
                else
                    break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
