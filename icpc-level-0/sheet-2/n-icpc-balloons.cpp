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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        char c; cin >> c;
        if(st.count(c) == 0){
            sum += 2;
            st.insert(c);
        }
        else{
            sum += 1;
        }
    }
    cout << sum << "\n";
}

signed main() {
    fastIO();
    IO();
    int t; cin >> t; while(t--)
    solve();
    return 0;
}
