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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fastIO;
    tc
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;

        unordered_map<int, int> dayPenalty;

        for (int i = 0; i < n; i++)
        {
            int day = a[i];
            int penalty = i + 1;

            if (dayPenalty.find(day) == dayPenalty.end())
                dayPenalty[day] = penalty;
            else
                dayPenalty[day] = max(dayPenalty[day], penalty);
        }

        ll total = 0;
        for (auto &e : dayPenalty)
            total += e.second;

        cout << total << endl;
    }

    return 0;
}
