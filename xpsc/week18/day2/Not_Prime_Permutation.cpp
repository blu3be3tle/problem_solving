// https://www.codechef.com/problems/NPRPE

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
        vector<int> p(n);

        for (int i = 0; i < n; i++)
            cin >> p[i];

        if (n <= 2)
        {
            cout << -1 << endl;
            continue;
        }

        int one = -1, three = -1;

        for (int i = 0; i < n; i++)
        {
            if (p[i] == 1)
                one = i;
            if (p[i] == 3)
                three = i;
        }

        if (one != -1 && three != -1)
            swap(p[one], p[three]);

        for (int i = 0; i < n; i++)
            cout << p[i] << " ";
        cout << endl;
    }
    return 0;
}
