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
    set<char> st;

    for (int i = 0; i < n; i++)
    {
        char c; cin >> c;
        c = toupper(c);
        st.insert(c);
    }

    if(st.size() >= 26){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
