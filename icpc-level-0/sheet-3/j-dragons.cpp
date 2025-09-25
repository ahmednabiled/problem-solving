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
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> xys;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        xys.push_back({x, y});
    }
    sort(xys.begin(), xys.end(),[](const auto& a, const auto& b) {
        if (a.first != b.first)
            return a.first < b.first;       
    });
        return a.second > b.second;     

    for(auto [x, y] : xys){
        if(s > x){
            s += y;
        }
        else{
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
