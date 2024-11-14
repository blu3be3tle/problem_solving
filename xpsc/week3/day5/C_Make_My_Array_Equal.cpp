#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
using namespace std;

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else if (n == 2)
        {
            if (a[0] == 0 || a[1] == 0 || a[0] == a[1])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            bool equal = true;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == 0)
                {
                    continue;
                }
                else if (a[i] != a[i + 1])
                {
                    equal = false;
                    break;
                }
            }

            if (equal)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}