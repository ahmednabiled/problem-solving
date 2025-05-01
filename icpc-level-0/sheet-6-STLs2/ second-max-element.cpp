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
    set<int> st;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        st.insert(x);
    }
    if(st.size() > 1)
        cout << *(--(--st.end())) << "\n";
    else
        cout << -1 << "\n";
}

signed main() {
    fastIO();
    IO();
    int t; cin >> t; while(t--)
    solve();
    return 0;
}
