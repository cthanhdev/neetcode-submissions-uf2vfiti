class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> st;
        for (int i = 0; i < 9; i++) {
            st.clear();
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                } else if (st.find(board[i][j]) == st.end()) {
                    st.insert(board[i][j]);
                } else {
                    return false;
                }
            }
        }

        for (int i = 0; i < 9; i++) {
            st.clear();
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') {
                    continue;
                } else if (st.find(board[j][i]) == st.end()) {
                    st.insert(board[j][i]);
                } else {
                    return false;
                }
            }
        }
        st.clear();

        for (int r = 0; r < 9; r += 3) {
            for (int c = 0; c < 9; c += 3) {
                for (int i = r; i < r + 3; i++) {
                    for (int j = c; j < c + 3; j++) {
                        if (board[i][j] == '.') {
                            continue;
                        } else if (st.find(board[i][j]) == st.end()) {
                            st.insert(board[i][j]);
                        } else {
                            return false;
                        }
                    }
                }
                st.clear();
            }
        }
        return true;
    }
};
