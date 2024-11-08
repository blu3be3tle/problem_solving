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
        int n, m;
        cin >> n >> m;
        map<int, set<int> > mp;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 1; i <= m; i++)
        {
            int l, r;
            cin >> l >> r;
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end())
            {
                cout << "NO" << endl;
            }
            else
            {
                int leftMost, rightMost;
                leftMost = *mp[l].begin();
                rightMost = *mp[r].rbegin();

                if (leftMost < rightMost)

                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}