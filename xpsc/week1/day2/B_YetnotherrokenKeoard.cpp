// https://codeforces.com/problemset/problem/1907/B

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
        string s;
        cin >> s;
        string result;
        int lc = 0, uc = 0;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            char c = s[i];
            if (c == 'b')
            {
                lc++;
            }
            else if (c == 'B')
            {
                uc++;
            }
            else if (islower(c) && lc > 0)
            {
                lc--;
            }
            else if (isupper(c) && uc > 0)
            {
                uc--;
            }
            else
            {
                result.push_back(c);
            }
        }

        reverse(result.begin(), result.end()); 
        cout << result << endl;
    }
    return 0;
}
