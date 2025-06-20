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
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int x = 0; x < k+1; x++)
    {
        for (int y = 0; y < k+1; y++)
        {
            int z = s - x - y;
            if(0 <= z && z <= k){
                cnt++;
            }
        }
        
    }
    cout << cnt;
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
