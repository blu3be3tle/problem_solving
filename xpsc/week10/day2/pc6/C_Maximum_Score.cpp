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

int main()
{
    fastIO;
    tc
    {
        int n;
        cin >> n;

        int temp;
        int oneCount = 0;
        int zeroCount = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;

            if (temp == 1)
            {
                oneCount++;
            }
            else
            {
                zeroCount++;
            }
        }

        cout << min(oneCount, zeroCount) << endl;
    }
    return 0;
}