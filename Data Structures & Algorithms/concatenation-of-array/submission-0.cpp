class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size() * 2;
        vector<int> ans;
        int k = 0;
        for (int i = 0; i < n; i++) {

            if (k == nums.size()) {
                k = 0;
            }
            ans.push_back(nums[k]);
            k++;
        }
        return ans;
    }
};