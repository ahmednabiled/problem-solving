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
    vector<vector<int>> points(n, vector<int> (3));
    vector<vector<int>> freq(3, vector<int> (204,0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int num; cin >> num;
            num += 100;
            points[i][j] = num;
            freq[j][num]++;
        }
        
    }

    for(auto point: points){
        for (int i = 0; i < 3; i++)
        {
            cout << freq[i][point[i]] - 1 << " ";
        }
        cout << "\n";
    }
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
