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

string nextPalindrome(const string &a)
{
    int n = a.size();
    string s = a;
    for (int i = 0; i < n / 2; i++)
        s[n - 1 - i] = s[i];
    if (s > a)
        return s;
    int mid = (n - 1) / 2;
    int carry = 1;
    for (int i = mid; i >= 0 && carry; i--)
    {
        int d = s[i] - 'a';
        d += carry;
        carry = d / 26;
        d %= 26;
        s[i] = 'a' + d;
    }
    if (carry)
        return "";
    for (int i = 0; i < n / 2; i++)
        s[n - 1 - i] = s[i];
    return s;
}

int main()
{
    fastIO;
    tc
    {
        int n;
        string a;
        cin >> n >> a;
        bool allZ = true;
        for (char c : a)
        {
            if (c != 'z')
            {
                allZ = false;
                break;
            }
        }
        if (allZ)
        {
            cout << -1 << endl;
        }
        else
        {
            string s = nextPalindrome(a);
            if (s == "")
                cout << -1 << endl;
            else
                cout << s << endl;
        }
    }
    return 0;
}
