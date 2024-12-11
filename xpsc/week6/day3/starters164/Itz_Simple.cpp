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
        int n, k, p;
        cin >> n >> k >> p;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            p += a[i];
        }
        int ved, var, y = *max_element(a.begin(), a.end());
        ved = k + y;
        var = p - y;

        if (ved > var)
            cout << "Ved" << endl;
        else if (var > ved)
            cout << "Varun" << endl;
        else
            cout << "Equal" << endl;
    }
    return 0;
}