// https://codeforces.com/contest/381/problem/A

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
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int s = 0, d = 0, who = 1;

    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left, right);
        if (who % 2 != 0)
        {
            s += mx;
        }
        else
        {
            d += mx;
        }
        if (mx == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        who++;
    }
    cout << s << " " << d << endl;

    return 0;
}