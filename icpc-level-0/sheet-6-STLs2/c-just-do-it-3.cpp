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
    set<int> st;
    while(q--){
        string cmd; cin >> cmd;
        int x; cin >> x;
        if(cmd == "insert"){
            st.insert(x);
        }
        else if(cmd == "lower_bound"){
            auto it = st.lower_bound(x);
            if(it != st.end())
                cout << *it << "\n";
            else{
                cout << "-1" << "\n";
            }
        }
        else if(cmd == "upper_bound"){
            auto it = st.upper_bound(x);
            if(it != st.end())
                cout << *it << "\n";
            else{
                cout << "-1" << "\n";
            }
        }
        else{
            if(st.count(x)){
                cout << "found" << "\n";
            }else{
                cout << "not found" << "\n";
            }
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
