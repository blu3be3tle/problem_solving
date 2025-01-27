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
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        int count = 0;
        bool flag = false;
        for (auto &x : a)
        {
            cin >> x;
            if (x > d && !flag)
            {
                count++;
                flag = true;
            }
            if (x <= d && flag)
            {
                count++;
                flag = false;
            }
        }
        cout << count << endl;
    }
    return 0;
}
