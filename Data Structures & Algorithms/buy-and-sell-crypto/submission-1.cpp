class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prifit = 0; 
        int r = 0;
            int minP = INT_MAX;
        while (r < prices.size()) { 
            minP = min(minP, prices[r]);
            prifit = max(prifit,prices[r] - minP );
            r++;
        }

return prifit;




    }
};
