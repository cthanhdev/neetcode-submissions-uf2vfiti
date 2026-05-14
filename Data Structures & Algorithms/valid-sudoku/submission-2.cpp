class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<char> st;

        // row
        for (int i = 0; i < 9; i++) {
            st.clear();

            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.') continue;

                if (st.find(board[i][j]) == st.end()) {
                    st.insert(board[i][j]);
                } else {
                    return false;
                }
            }
        }

        // col
        for (int i = 0; i < 9; i++) {

            st.clear();

            for (int j = 0; j < 9; j++) {

                if (board[j][i] == '.') continue;

                if (st.find(board[j][i]) == st.end()) {
                    st.insert(board[j][i]);
                } else {
                    return false;
                }
            }
        }

        // 3x3
        st.clear();

        int r = 0;
        int c = 0;

        while (true) {

            for (int i = r; i < r + 3; i++) {

                for (int j = c; j < c + 3; j++) {

                    if (board[i][j] == '.') {
                        continue;
                    }

                    if (st.find(board[i][j]) == st.end()) {
                        st.insert(board[i][j]);
                    } else {
                        return false;
                    }
                }
            }

            st.clear();

            if (c < 6) {
                c += 3;
            } else {
                c = 0;
                r += 3;
            }

            if (r > 8) {
                break;
            }
        }

        return true;
    }
};