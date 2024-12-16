#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define ll long long

int main()
{
    fastIO;
    tc
    {
        int n, count = 0;
        string s;
        cin >> n >> s;
        stack<char> st;
        for (auto e : s)
        {
            if (!st.empty() && st.top() != e)
            {
                st.pop();
                count++;
            }
            else
                st.push(e);
        }
        if (count % 2 == 0)
            cout << "Ramos";
        else
            cout << "Zlatan";
        cout << endl;
    }
}