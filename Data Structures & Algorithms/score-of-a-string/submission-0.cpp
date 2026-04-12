class Solution {
public:
    int scoreOfString(string s) {
        vector<int> t;
        for (int i : s) {
            t.push_back(i);
        }

        int l = 0;
        int r = l + 1;
        int sum = 0;
        while (r < t.size()) {
            sum += abs(t[l] - t[r]);
            l++;
            r++;
        }
        return sum;
    }
};