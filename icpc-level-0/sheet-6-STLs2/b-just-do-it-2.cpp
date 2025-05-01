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
    int n, q; cin >> n >> q;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string name; cin >> name;
        int amount; cin >> amount;
        mp.insert({name, amount});
    }

    while (q--)
    {
        int op; cin >> op;
        string name; cin >> name;
        if(op == 1){
            int amount; cin >> amount;
            mp[name] += amount;
        }
        else{
            cout << mp[name] << "\n";
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
