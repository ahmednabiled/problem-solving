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

// this version uses the freqency map techniuqe
void solve() {
    int q; cin >> q;
    map<int, int> mp;

    while (q--)
    {
        int op, x; cin >> op;
        if(op == 1){
            cin >> x;
            if(mp.count(x) == 0)
                mp[x] = 1;
            else
                mp[x]++;
        }
        else if (op == 2){
            cin >> x;
            if (mp.count(x)) {  
                if (mp[x] == 1)
                    mp.erase(x);
                else
                    mp[x]--;
            }
        }
        else{
            if(mp.empty())
                cout << "It is Just EMPTY" << "\n";
            else
                cout << mp.begin()->first << "\n";
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
