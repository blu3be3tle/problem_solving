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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> um;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            um[a[i]]++;
        }
        int count = 0;

        for (auto &e : um)
            count += e.second / 2;
        cout << count << endl;
    }
    return 0;
}