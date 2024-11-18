#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[i + 1])
                cnt++;
        }
        cout << cnt / 2 << endl;
    }
    return 0;
}