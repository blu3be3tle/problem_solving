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
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;
        int count = 0;
        vector<int> diff;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                count++;
            else
                diff.push_back(b[i] - a[i]);
        }

        sort(diff.begin(), diff.end());

        if (count > n / 2)
            yes;
        else
        {
            for (int i = 0; i < diff.size(); i++)
            {
                if (diff[i] < x)
                {
                    x -= diff[i] + 1;
                    count++;
                }
                if (count > n / 2)
                    break;
                if (x <= 0)
                    break;
            }
            if (count > n / 2)
                yes;
            else
                no;
        }
    }
    return 0;
}
