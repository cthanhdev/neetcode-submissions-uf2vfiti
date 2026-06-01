class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int k  =0;
    for (int i = 0 ; i < s.length(); i++){ 

if (!st.empty() && st.top() == 40 ){ 
        k = 1; 
    } else if (!st.empty() && st.top() == 91 || !st.empty() && st.top() == 123){ 
        k = 2;
    }

     if (s[i] == 40 ||s[i] == 91 || s[i] == 123 ){ 
        st.push(s[i]);
     } else { 
        if (st.empty() || st.top() != (s[i] - k)) { 
            return false;
        } else { 
            st.pop();
            k = 0;
        }
     }
     
     

    }
if (!st.empty() ){ 
    return false;
} else { 
    return true;
}

    }
};
