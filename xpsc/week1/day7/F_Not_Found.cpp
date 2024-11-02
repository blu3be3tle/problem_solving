#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_set<char> letters(s.begin(), s.end());

    for (char c = 'a'; c <= 'z'; c++)
    {
        if (letters.find(c) == letters.end())
        {
            cout << c << endl;
            return 0;
        }
    }

    cout << "None" << endl;
    return 0;
}
