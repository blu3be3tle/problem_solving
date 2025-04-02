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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int maxVal = 0;
        for (int i = 0; i < n; i++)
        {
            int left = i;
            int right = (n - 1) - i;
            int current = a[i] + (left / 2) + (right / 2);
            if (current > maxVal)
            {
                maxVal = current;
            }
        }
        cout << maxVal << endl;
    }
    return 0;
}
