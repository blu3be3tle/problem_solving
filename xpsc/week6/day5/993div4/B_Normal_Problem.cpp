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
        string a;
        cin >> a;
        string b = "";


        for (int i = a.size() - 1; i >= 0; i--)
        {
            if (a[i] == 'p')
                b += 'q';
            else if (a[i] == 'q')
                b += 'p';
            else
                b += 'w';
        }

        cout << b << endl;
    }
    return 0;
}
