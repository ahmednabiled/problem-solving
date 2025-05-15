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


int remove_zeros(int x) {
    string s = to_string(x);
    string t;
    for (char c : s)
        if (c != '0')
            t.push_back(c);
    return t.empty() ? 0 : stoi(t);
}

void solve() {
    int a, b;
    cin >> a >> b;
    int c = a + b;

    int a2 = remove_zeros(a);
    int b2 = remove_zeros(b);
    int c2 = remove_zeros(c);

    cout << ( (a2 + b2 == c2) ? "YES\n" : "NO\n" );

}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
