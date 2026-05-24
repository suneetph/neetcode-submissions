class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> st;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                char c = board[i][j];
                string row = "ROW" + to_string(i) + c;
                string col = "COL" + to_string(j) + c;
                string box = "BOX" + to_string(i/3) + "_" + to_string(j/3) + c;

                if(st.count(row) || st.count(col) || st.count(box)) return false;

                st.insert(row);
                st.insert(col);
                st.insert(box);
            }
        }

        return true;
    }
};