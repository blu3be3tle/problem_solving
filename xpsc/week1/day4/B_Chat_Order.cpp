// https://codeforces.com/problemset/problem/637/B

#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
typedef long long ll;
using namespace std;

void removeDuplicate(stack<string> &st)
{
    set<string> seen;
    stack<string> temp;
    while (!st.empty())
    {
        string top = st.top();
        st.pop();

        if (seen.find(top) == seen.end())
        {
            seen.insert(top);
            temp.push(top);
        }
    }

    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}

int main()
{
    fastIO;
    int n;
    cin >> n;
    stack<string> order;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        order.push(s);
    }

    removeDuplicate(order);

    while (!order.empty())
    {
        cout << order.top() << endl;
        order.pop();
    }
    return 0;
}