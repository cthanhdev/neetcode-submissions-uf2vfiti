class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_map<int,int> fery;

    for (int x : nums) { 
        fery[x]++;

        if (fery[x] >= 2) { 
            return true;
        }
    }
    return false;
    }
};