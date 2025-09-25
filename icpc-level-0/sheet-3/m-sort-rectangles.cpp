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
    vector<pair<int, int>> rects;
    
    for (int i = 0; i < n; i++)
    {
        vector<pair<int, int>> arr(4);
        for (int j = 0; j < 4; j++) {  
            int fr, sc; cin >> fr >> sc;
            arr[j] = {fr, sc};
        }
        
        vector<int> xs;
        vector<int> ys;
        for (int j = 0; j < 4; j++)  
        {
            xs.push_back(arr[j].first);
            ys.push_back(arr[j].second);
        }
        int min_x = *min_element(xs.begin(), xs.end());
        int max_x = *max_element(xs.begin(), xs.end());
        int min_y = *min_element(ys.begin(), ys.end());
        int max_y = *max_element(ys.begin(), ys.end());

        int area = (max_x - min_x) * (max_y - min_y);
        
        rects.push_back({area, i + 1});  
    }
    
    sort(rects.begin(), rects.end());
    
    for (int i = 0; i < n; i++)
    {
        cout << rects[i].second << " " << rects[i].first << "\n";
    }
}

signed main() {
    fastIO();
    // IO();
    solve();
    return 0;
}