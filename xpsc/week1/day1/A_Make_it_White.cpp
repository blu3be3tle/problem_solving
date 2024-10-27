// https://codeforces.com/problemset/problem/1927/A

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
        string s;
        cin >> s;

        int firstPos = -1, lastPos = -1;
        firstPos = s.find('B');
        lastPos = s.rfind('B');
        int ans = lastPos - firstPos + 1;
        cout << ans << endl;
    }

    return 0;
}