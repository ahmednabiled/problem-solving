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
    int q; cin >> q;
    multiset<int> mst;
    while(q--){
        string cmd; cin >> cmd;
        if(cmd == "push"){
            int x; cin >> x;
            mst.insert(x);
        }
        else if(cmd == "top"){
            if(mst.empty())
                cout << "IT IS JUST EMPTY" << "\n";
            else
                cout << *mst.rbegin() << "\n";

        }
        else{
            if(mst.empty())
                cout << "IT IS JUST EMPTY" << "\n";
            else
                mst.erase(prev(mst.end()));
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
