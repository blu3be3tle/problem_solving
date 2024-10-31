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
    string s = to_string(n);

    while (s.length() < 4)
    {
        s = "0" + s;
    }
    cout << s << endl;
    return 0;
}