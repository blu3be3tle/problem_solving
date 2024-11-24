#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            no;
        }
        else
        {
            yes;
            string ans;
            for (int i = 0; i < n / 2; i++)
            {
                if (i % 2 == 0)
                    ans += "AA";
                else
                    ans += "BB";
            }
            cout << ans.substr(0, n + 1) << endl;
        }
    }
    return 0;
}