// https://codeforces.com/contest/855/problem/A
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
    int n;
    cin >> n;
    set<string> found;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (found.find(s) != found.end())
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
            found.insert(s);
    }
    return 0;
}