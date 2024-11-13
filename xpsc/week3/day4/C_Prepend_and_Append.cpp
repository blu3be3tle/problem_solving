#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
using namespace std;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = n - 1, ans = n;

        while (l <= r)
        {
            if (s[l] == s[r])
            {
                break;
            }
            else
            {
                ans -= 2;
                l++;
                r--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}