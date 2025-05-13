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
    int n;
    cin >> n;
    int arr[2] = {0,1};
    if(n == 0 || n == 1){
        cout << arr[0] << "\n";
    }
    else{
        for (int i = 2; i < n; i++)
        {
            int sum = arr[0] + arr[1];
            arr[0] = arr[1];
            arr[1] = sum;
        }
        cout << arr[1];
    }
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
