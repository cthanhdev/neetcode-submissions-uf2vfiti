class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
           vector<int> res;
        for (int i = 0; i < nums.size();i++){ 
            mp[nums[i]] = i;
        }

        for (int i = 0 ; i < nums.size(); i++){ 
            int n = target - nums[i];
            if (mp.find(n) != mp.end() && mp[n] != i){ 
             
                res.push_back(i);
                res.push_back(mp[n]);
                 return res;
            }
        }
    }
};
