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
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    int ans = 0, problems = 1;

    while (!ml.empty())
    {
        auto LB = ml.lower_bound(problems);
        if (LB != ml.end())
        {
            ans++;
            ml.erase(LB);
        }
        else {
            break;
        }
        problems++;
    }
    cout << ans << endl;
    return 0;
}