#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'

typedef long long ll;
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
        vector<int> remaining(n - 2);
        ll remainingSum = 0;

        for (int i = 0; i < n - 2; i++)
        {
            cin >> remaining[i];
            remainingSum += remaining[i];
        }

        ll totalSum;
        cin >> totalSum;

        ll missingSum = totalSum - remainingSum;

        if (missingSum >= 0)
            cout << missingSum + 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}