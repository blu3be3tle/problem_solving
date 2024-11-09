#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
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

        vector<int> d(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> d[i];
        }

        priority_queue<int> bonus;
        ll total = 0;

        for (int i = 0; i < n; i++)
        {
            if (d[i] > 0)
            {
                bonus.push(d[i]);
            }
            else
            {
                if (!bonus.empty())
                {
                    total += bonus.top();
                    bonus.pop();
                }
            }
        }

        cout << total << endl;
    }
    return 0;
}
