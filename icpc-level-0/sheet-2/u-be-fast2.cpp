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
    int l, r, n;
    cin >> l >> r >> n;

    int divisible = r / n - (l - 1) / n;
    int total = r - l + 1;
    cout << total - divisible;
}

signed main() {
    fastIO();
    IO();
    solve();
    return 0;
}
