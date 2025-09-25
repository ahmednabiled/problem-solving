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
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i] - i]++;
    }

    int cnt = 0;
    for(auto i: freq){
        if(i.second > 1){
            cnt += i.second * (i.second - 1)/2;
        }
    }
    cout << cnt << "\n";
}

signed main() {
    fastIO();
    IO();
    int t; cin >> t; while(t--)
    solve();
    return 0;
}
