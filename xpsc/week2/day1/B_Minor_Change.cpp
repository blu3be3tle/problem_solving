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
    string s;
    string t;
    cin >> s >> t;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != t[i])
            count++;
    }
    cout << count;
    return 0;
}