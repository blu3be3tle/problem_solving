#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
using namespace std;

int typingTime(const string &s)
{
    int time = 2;
    for (int i = 0; i < s.size(); i++)
    {
        time += s[i] == s[i - 1] ? 1 : 2;
    }
    return time;
}

int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int maxTime = 0;
        string goodPW;

        for (char c = 'a'; c <= 'z'; c++)
        {
            for (int i = 0; i < s.size(); i++)
            {
                string tmp = s.substr(0, i) + c + s.substr(i);
                int time = typingTime(tmp);

                if (time > maxTime)
                {
                    maxTime = time;
                    goodPW = tmp;
                }
            }
        }
        cout << goodPW << endl;
    }

    return 0;
}