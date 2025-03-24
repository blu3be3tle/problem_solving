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
        int x, y, k;
        cin >> x >> y >> k;
        int count = 0;

        if (k > x + y)
        {
            cout << -1 << endl;
            continue;
        }

        while (abs(x - y) != k)
        {
            int diff = abs(x - y);
            if (diff < k)
            {
                if (x == y)
                {
                    if (x > 0)
                    {
                        x--;
                        y++;
                    }
                    else
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
                else if (x > y)
                {
                    if (y > 0)
                    {
                        x++;
                        y--;
                    }
                    else
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
                else
                {
                    if (x > 0)
                    {
                        x--;
                        y++;
                    }
                    else
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
            }
            else
            {
                if (x > y)
                {
                    if (x > 0)
                    {
                        x--;
                        y++;
                    }
                    else
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
                else
                {
                    if (y > 0)
                    {
                        x++;
                        y--;
                    }
                    else
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
            }

            count++;
            if (count > 1000)
            {
                cout << -1 << endl;
                break;
            }
        }
        if (abs(x - y) == k)
            cout << count << endl;
    }
    return 0;
}
