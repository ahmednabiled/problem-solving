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
    int n;cin >>n;
    cin.ignore();
    string str_base;
    getline(cin, str_base);
    string str_temp;
    while(getline(cin, str_temp)){
        if(str_base != str_temp){
            cout << "you were right\n" << "\n";
            return;
        }
    }
    cout << "Empedocles was right";
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
