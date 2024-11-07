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
        string s, t;
        cin >> s >> t;

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (!((s[i] == t[i]) || ((s[i] == 'G' || s[i] == 'B') && (t[i] == 'G' || t[i] == 'B'))))
                flag = false;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}