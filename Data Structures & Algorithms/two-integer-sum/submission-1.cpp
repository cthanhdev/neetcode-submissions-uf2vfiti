class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       for ( int i = 0 ; i < nums.size() ; i++){
        int tmp1 = nums[i];
        for ( int j = 1; j < nums.size() ; j++){
            if ( ( tmp1 + nums[j] == target && i != j)){
                return {i, j};
            }
        }
       } 
    }
};
