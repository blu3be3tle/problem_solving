#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int sCount = 0, tCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                sCount++;
            if (t[i] == '1')
                tCount++;
        }
        int diff = abs(sCount - tCount);
        if (diff % 2 == 0)
            yes;
        else
            no;
    }
    return 0;
}
