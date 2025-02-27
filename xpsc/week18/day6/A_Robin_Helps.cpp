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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int temp = 0, count = 0;

        for (auto &x : a)
        {
            cin >> x;
            if (x >= k)
            {
                temp += x;
            }
            if (x == 0 && temp > 0)
            {
                count++;
                temp--;
            }
        }
        cout << count << endl;
    }
    return 0;
}
