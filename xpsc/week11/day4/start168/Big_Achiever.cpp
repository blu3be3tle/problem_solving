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

int main()
{
    fastIO;
    tc
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int maxScore = 0;
        vector<int> res(n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] > maxScore)
            {
                maxScore = a[i];
                res[i] = 1;
            }
            else
            {
                res[i] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
