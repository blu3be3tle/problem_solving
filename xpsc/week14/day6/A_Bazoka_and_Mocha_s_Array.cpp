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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int countDecreases = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i] > a[i + 1])
            {
                countDecreases++;
            }
        }

        if (countDecreases > 1)
        {
            cout << "No" << endl;
        }
        else
        {

            if (a[n - 1] > a[0])
            {
                countDecreases++;
            }

            if (countDecreases > 1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}