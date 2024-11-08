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

        map<int, int> count;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            count[x]++;
        }

        priority_queue<int> pq;
        for (auto [x, y] : count)
        {
            pq.push(y);
        }
        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }
            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--;
            y--;

            if (x >= 1)
            {
                pq.push(x);
            }
            if (y >= 1)
            {
                pq.push(y);
            }
        }

        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << endl;
    }
    return 0;
}