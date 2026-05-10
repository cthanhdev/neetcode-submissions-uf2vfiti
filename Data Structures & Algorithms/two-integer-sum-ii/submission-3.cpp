class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 1 ;
        int r = numbers.size();
        vector <int>res;
        while ( l < r){ 

            if(numbers[l - 1] + numbers[r - 1] == target){ 
                         
                return {l,r};
            }

            if(numbers[l - 1] + numbers[r - 1] > target){ 
                r--;
            } else { 
                l++;
            }
        }
        return {};
    }
};
