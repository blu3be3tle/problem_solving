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
    vector<string> s(n);
    vector<string> ans;

    for (int i = 0; i < n; i++)
        cin >> s[i];

    set<string> st;

    for (int i = n - 1; i >= 0; i--)
    {
        int len = s[i].length();
        string suffix = s[i].substr(len - 2, 2);
        if (st.find(s[i]) == st.end())
        {
            ans.push_back(suffix);
            st.insert(s[i]);
        }
    }
    for (auto a : ans)
        cout << a;
    return 0;
}