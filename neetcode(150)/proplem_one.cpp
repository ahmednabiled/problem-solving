# include <bits/stdc++.h>
#include <ios>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> freq;
        for(int i=0; i < nums.size(); i++){
            if(freq.count(nums[i]))
                return true;
            freq.insert(nums[i]);
        }
        return false;
    }
};

signed main(){
    vector<int> nums = {1,3,2,4};
    Solution sol;
    cout << boolalpha <<sol.containsDuplicate(nums);
}