class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int > mp;
        unordered_map<char, int > window;
        for (char c : s1){ 
            mp[c]++;
        }
    int l = 0, r = 0;

    while (r < s2.length()) { 

            window[s2[r]]++;
            
        
        if ((r - l + 1 )> s1.length() ){ 
                        window[s2[l]]--;
                        
                        if (window[s2[l]] == 0)
    window.erase(s2[l]);
    l++;
        }

        if ((r - l + 1) == s1.length()) { 
           if (mp == window) { 
            return true;
           }
        }
r++;
    }

        return false;
    }
};
