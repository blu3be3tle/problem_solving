#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (k > (n + 1) / 2 || k < n / 2 || (k == 0 && n > 1) || k == n)
        {
            no;
        }
        else
        {
            yes;
        }
    }

    return 0;
}
