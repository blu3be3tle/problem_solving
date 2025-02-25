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
        int n, k, p;
        cin >> n >> k >> p;
        int maxSum = n * p;
        int minSum = n * (-p);
        if (k < minSum || k > maxSum)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << (abs(k) + p - 1) / p << endl;
        }
    }

    return 0;
}
