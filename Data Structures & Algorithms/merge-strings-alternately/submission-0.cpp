class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l = 0; // con trỏ cho word1
        int r = 0; // con trỏ cho word2
        string res = ""; // kết quả

        // duyệt khi cả hai string vẫn còn ký tự
        while (l < word1.length() && r < word2.length()) {

            // đoạn này thực ra luôn đúng do điều kiện while đã check
            if (l < word1.length()) {
                res += word1[l]; // thêm ký tự từ word1
            }
            if (r < word2.length()) {
                res += word2[r]; // thêm ký tự từ word2
            }

            l++; // tăng con trỏ word1
            r++; // tăng con trỏ word2
        }

        // sau khi thoát loop, sẽ có 1 trong 2 string còn dư

        if (l == word1.length()) {
            // word1 đã hết → nối phần còn lại của word2
            res += word2.substr(r);
        } else if (r == word2.length()) {
            // word2 đã hết → nối phần còn lại của word1
            res += word1.substr(l);
        }

        return res; // trả kết quả
    }
};