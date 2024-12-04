#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define endl '\n'
#define ll long long
int findMinXOR(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        result ^= nums[i];
    }

    int minXor = result;

    for (int i = 0; i < n; ++i)
    {
        int xorAfterRemoval = result ^ nums[i];
        minXor = min(minXor, xorAfterRemoval);
    }

    return minXor;
}

int main()
{
    fastIO;
    int t, a, n;
    cin >> t;
    while (t--)
    {
        vector<int> nums;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            nums.push_back(a);
        }
        int result = findMinXOR(nums);
        cout << result << endl;
    }
    return 0;
}