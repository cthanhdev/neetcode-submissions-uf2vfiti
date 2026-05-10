class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0; 
        int r = 1;

    if (nums.size() == 0){ 
        return 0;
    }

        int length = 1;
        int maxl = 1;
        while (r < nums.size()){ 

            if (nums[r] == nums[l]){ 
                l++;
                r++;
            } else if ((nums[r] - 1 ) == nums[l] ){ 
                length++;
                l = r; 
                r++;
            } else { 
                l = r; 
                r++;
                maxl = max(length, maxl);
                length = 1;
            } 

        }
        maxl = max(length, maxl);
        return maxl;
    }
};
