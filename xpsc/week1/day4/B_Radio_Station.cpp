// https://codeforces.com/contest/918/problem/B
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
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> server;

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        server[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string cmd, ip;
        cin >> cmd >> ip;
        ip.pop_back();
        cout << cmd << " " << ip << "; #" << server[ip] << endl;
    }

    return 0;
}