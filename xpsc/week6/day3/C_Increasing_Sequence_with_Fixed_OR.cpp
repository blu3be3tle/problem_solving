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
        long long n;
        cin >> n;
        deque<ll> ans;
        for (int k = 0; k <= __lg(n); k++)
        {
            if ((n >> k) & 1)
            {
                ll value = n - (1LL << k);
                if (value > 0)  
                {
                    ans.push_front(value);
                }
            }
        }

        ans.push_back(n);
        cout << ans.size() << '\n';
        for (auto value : ans)
        {
            cout << value << " ";
        }
        cout << '\n';
    }

    return 0;
}