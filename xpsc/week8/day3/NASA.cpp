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
const int maxN = (1LL << 15);

vector<int> allPalindrome;
bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}

int main()
{
    fastIO;
    markPalindrome();
    tc
    {
        int n;
        cin >> n;
        vector<int> a(n), count(maxN + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
        }

        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allPalindrome.size(); j++)
            {
                int curr = (a[i] ^ allPalindrome[j]);
                ans += count[curr];
            }
        }

        cout << (ans / 2) << endl;
    }
    return 0;
}