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
    multiset<int> mst;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x == 0){
            if(!mst.empty()){
                auto it = prev(mst.end());
                sum += *it;
                mst.erase(it);
            }
        }
        else{
            mst.insert(x);
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