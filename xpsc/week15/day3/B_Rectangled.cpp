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
        if (n < 4)
        {
            cout << 0 << endl;
            continue;
        }
        int p = (n % 2 == 0 ? n : n - 1);
        int h = p / 2; 
        int l = h / 2; 
        int w = (h % 2 == 0 ? l : l + 1);
        ll area = 1LL * l * w;
        cout << area << endl;
    }
    return 0;
}
