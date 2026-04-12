class Solution {
public:
    bool isPalindrome(string s) {
        for (char&c : s){ 
            c = tolower(c);
        }
        int l = 0 ; 
        int r = s.length() - 1;
        while(l < r) { 

           if (!isalnum(s[l])) {
    l++;
}
else if (!isalnum(s[r])) {
    r--;
} else 
if (s[l] != s[r]){ 
                return false;
            } else{
            l++;
            r--;
            }
        }
        return true;
    }
};
