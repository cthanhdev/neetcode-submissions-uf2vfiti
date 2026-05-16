class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        if (st.size() == 0) {
            return 0;
        }
        int length = 1;
        int tmp;
        int longMAX;
        for (int nums : st) {
            // bat dau bang so goc - 1 ko tồn tại : vd [2,20,4,10,3,4,5], nums = 2 (nums - 10 = 1)
            // khong ton tai vay 2 la so min nhat
            if (st.find(nums - 1) == st.end()) {
tmp = nums;
                length = 1;
                while (st.find(tmp + length) != st.end()) {
                    length++;
                }
            }
            longMAX = max(longMAX, length);
        }
        return longMAX;
    }
};
