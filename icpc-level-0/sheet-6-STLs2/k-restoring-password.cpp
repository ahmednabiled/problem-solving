#include <bits/stdc++.h>
#define int long long
using namespace std;

void IO() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
}

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


void solve() {
    string str; cin >> str;
    map<string, char> mp;

    for (char i = '0'; i <= '9'; i++)
    {
        string chunk; cin >> chunk;
        mp[chunk] = i;
    }

    for (int i = 0; i < 80; i+=10)
    {
        string chunk = str.substr(i, 10);
        cout << mp[chunk];
    }
    
    
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
