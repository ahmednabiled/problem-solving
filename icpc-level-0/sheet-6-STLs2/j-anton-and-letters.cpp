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
    string s;
    getline(cin, s);

    set<char> st;

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {  
            st.insert(c);
        }
    }

    cout << st.size() << "\n";
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
