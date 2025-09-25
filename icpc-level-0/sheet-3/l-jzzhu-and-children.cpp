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
    vector<pair<int, int>> arr;
    for (int i = 1; i < n+1; i++)
    {
        int num; cin >> num;
        arr.push_back({num, i});
    }


    while (arr.size() > 1)
    {
        if(arr[0].first <= m){
            arr.erase(arr.begin());
        }
        else{
            pair<int, int> temp = arr[0];
            temp.first -= m;
            arr.erase(arr.begin());
            arr.push_back(temp);
        }
    }

    cout << arr[0].second;
    
    
    

    
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
