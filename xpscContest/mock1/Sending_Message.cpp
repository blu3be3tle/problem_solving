#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        stringstream ss(line);
        string w1, w2;
        ss >> w1 >> w2;
        int n = w1.length();
        int m = w2.length();
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            if (j < m && w1[i] == w2[j])
            {
                j++;
            }
        }

        if (j == m)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }
    return 0;
}
