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
        vector<int> x(n);
        vector<int> y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> y[i];
        }

        bool found = false;

        for (int i = 0; i < n; i++)
        {
            int pivot = x[i];

            vector<pair<int, int>> v;

            for (int j = 0; j < n; j++)
            {
                v.push_back({abs(pivot - x[j]), x[j]});
            }
            sort(v.begin(), v.end());

            vector<int> temp(n);
            for (int j = 0; j < n; j++)
            {
                temp[j] = v[j].second;
            }

            if (temp == y)
            {
                cout << i + 1 << endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << -1 << endl;
    }
    return 0;
}
