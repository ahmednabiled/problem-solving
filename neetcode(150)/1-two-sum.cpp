class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> hash;
      for(int i = 0; i < nums.size(); i++){
        int num1 = nums[i];
        int num2 = target - num1;

        if(hash.count(num2)){
            return {i, hash[num2]};
        }

        hash[nums[i]] = i;
      }
      return {};
    }
};
