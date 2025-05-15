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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    
    int min_diff = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int diff = 0;
            for (int k = 0; k < m; k++)
                diff += abs(s[i][k] - s[j][k]);
            min_diff = min(min_diff, diff);
        }
    }
    cout << min_diff << "\n";
}


signed main() {
    fastIO();
    IO();
    int t; cin >> t; while(t--)
    solve();
    return 0;
}
