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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

int main()
{
    fastIO;
    tc
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;

        int count = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i] > a[i + 1])
            {
                count++;
            }
        }

        if (count > 1)
        {
            no;
        }
        else
        {

            if (a[n - 1] > a[0])
                count++;
            if (count > 1)
                no;
            else
                yes;
        }
    }

    return 0;
}