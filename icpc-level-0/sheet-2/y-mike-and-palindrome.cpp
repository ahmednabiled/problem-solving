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
    string str;cin >> str;
    int l = 0, r = str.size()-1;
    int cnt = 0;

    while(l < r){
        if((str[l] != str[r]))
            cnt++;
        l++; r--;
    }

    if(cnt == 1){
        cout << "YES\n";
    }
    else if(cnt == 0){
        if(str.size()%2 == 1)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}


signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
