class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string, vector<string>> hash;
        for(int i = 0; i< strs.size(); i++){
            string str_sorted = strs[i];
            sort(str_sorted.begin(), str_sorted.end());
            hash[str_sorted].push_back(strs[i]);
        }
        for(auto i: hash){
            result.push_back(i.second);
        }
        return result;
    }
};
