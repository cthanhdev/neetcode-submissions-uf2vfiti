class Solution {
    public int findMin(int[] nums) {

        int l = 0;
        int r = nums.length - 1;
        int min = 0;
        while (l < r) {
            min = l + (r - l) / 2;

            if (nums[min] > nums[r]) {
                l = min + 1;
            } else {
                r = min;
            }
        }

        return nums[l];
    }
}
