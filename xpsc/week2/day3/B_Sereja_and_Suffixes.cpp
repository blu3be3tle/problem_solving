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
    
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), cnt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    set<int> s;
    for (int i = n; i >= 1; i--)
    {
        s.insert(a[i]);
        cnt[i] = s.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int pos;
        cin >> pos;
        cout << cnt[pos] << endl;
    }

    return 0;
}