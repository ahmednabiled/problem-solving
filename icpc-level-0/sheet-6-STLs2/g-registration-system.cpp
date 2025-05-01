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
    int n;cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string str; cin >> str;
        if(mp.count(str) == 0){
            cout << "OK" << "\n";
            mp[str] = 0;
        }
        else{
            mp[str]++;
            cout << str << mp[str] << "\n";
        }
    }
    
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
