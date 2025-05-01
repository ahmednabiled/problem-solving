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
    int n; cin >> n;
    int max_size = 0;
    set<int> st;
    for (int i = 0; i < 2*n; i++)
    {
        int x; cin >> x;
        if(st.count(x)){
            st.erase(x);
        }
        else{
            st.insert(x);
        }
        max_size = (max_size > st.size())? max_size : st.size();
    }
    cout << max_size << "\n";

}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
