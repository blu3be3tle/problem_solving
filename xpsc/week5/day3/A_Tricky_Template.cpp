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
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;

        bool possible = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                possible = true;
            }
        }

        if (possible)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}
