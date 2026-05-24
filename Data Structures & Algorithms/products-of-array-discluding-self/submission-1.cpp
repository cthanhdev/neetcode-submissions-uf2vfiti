class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

vector<int> res;
for (int l = 0 ; l < nums.size(); l++){ 
    int tagert = 1;
    for (int r = 0 ; r < nums.size(); r++){ 
        if (r != l){ 
            tagert *= nums[r];
        }
    }
    res.push_back(tagert);
}
        return res;

    }
};
