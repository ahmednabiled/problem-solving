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
    vector<char> row1(n);
    vector<char> row2(n);

    for (int i = 0; i < n; i++)
    {
        char c; cin >> c;
        if(c == 'B') c = 'G';
        row1[i] = c;
    }

    for (int i = 0; i < n; i++)
    {
        char c; cin >> c;
        if(c == 'B') c = 'G';
        row2[i] = c;
    }

    for (int i = 0; i < n; i++)
    {
        if(row1[i] != row2[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    
}

signed main() {
    fastIO();
    IO();
    int t; cin >> t; while(t--)
    solve();
    return 0;
}
