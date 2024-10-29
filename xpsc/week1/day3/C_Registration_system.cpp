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
    vector<pair<string, int>> db;
    while (t--)
    {
        string s;
        cin >> s;

        bool exists = false;
        for (auto &e : db)
        {
            if (e.first == s)
            {
                exists = true;
                e.second++;
                cout << s << e.second << endl;
            }
        }
        if (!exists)
        {
            db.push_back(make_pair(s, 0));
            cout << "OK" << endl;
        }
    }
    return 0;
}
