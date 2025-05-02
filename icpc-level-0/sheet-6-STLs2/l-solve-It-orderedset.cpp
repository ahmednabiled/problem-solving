#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define int long long
using namespace std;


template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


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

    vector<int> enter(n);
    vector<int> exit(n);

    for (int i = 0; i < n; ++i)
        cin >> enter[i];

    for (int i = 0; i < n; ++i)
        cin >> exit[i];


    map<int, int> enter_pos;
    for (int i = 0; i < n; ++i) {
        enter_pos[enter[i]] = i;
    }

    int fined = 0;
    ordered_set<int> os;

    for (int i = 0; i < n; ++i) {
        int car = exit[i];
        int pos = enter_pos[car];
        

        int out_and_entered_before_me = os.order_of_key(pos);
        
        if (!(out_and_entered_before_me == pos)) { 
            fined++;
        }

        os.insert(pos);
    }

    cout << fined << "\n";
}

signed main() {
    fastIO();
    IO();
    // int t; cin >> t; while(t--)
    solve();
    return 0;
}
