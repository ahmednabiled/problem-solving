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
    vector<char> arr(n);
    int final_postion;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++)
    {   
        int cnt = 0;
        int j = i;
        while(arr[j] == '*' && j < n){
            cnt++;
            j++;
        }
        if(cnt > 1){
            final_postion = i-1;
            break;
        }
        if(i == n-1 || j == n){
            if(i == n-1 && j == n-1){
                final_postion = i;
                break;
            }
            else if(j == n){
                final_postion = i-1;
                break;
            }
        }
    }
    // cout << final_postion << "\n";
    int sum = 0;
    for (size_t i = 0; i < final_postion+1; i++)
    {
        if(arr[i] == '@'){
            sum++;
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
