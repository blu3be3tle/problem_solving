#include <bits/stdc++.h>
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl '\n'
using namespace std;

int main() {
    fastIO;
    int n, m;   
    cin >> n >> m;
    cin.ignore();
    
    vector<pair<string, string> > servers(n);
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        ss >> servers[i].first >> servers[i].second;  // (name, ip)
    }
    
    for (int i = 0; i < m; i++) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string command, ip;
        ss >> command >> ip;  // Extract command and ip

        // Find the server name for the given IP
        string serverName;
        for (const auto& server : servers) {
            if (server.second == ip) {
                serverName = server.first;  // Get the server name
                break;
            }
        }
        
        // Output the command with the associated server name
        cout << command << " " << ip << "; #" << serverName << endl;  // Correct format
    }
    
    return 0;
}
