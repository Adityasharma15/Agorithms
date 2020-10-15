// 79. Word Search

class Solution {

    // simple backtracking

    int n = 0, m = 0;

    bool wordsearch(vector<vector<char>>& board, string word, int index, int i, int j){

        if(index == word.size())
            return true;

        if(i<0 || i>=n || j<0 || j>=m)
            return false;

        if(board[i][j] != word[index])
            return false;

            // to avoid recurring back to this
            board[i][j] = '$';

            bool find = wordsearch(board, word, index+1, i - 1, j) ||
            wordsearch(board, word, index+1, i + 1, j) ||
            wordsearch(board, word, index+1, i , j - 1) ||
            wordsearch(board, word, index+1, i , j + 1);

            // change it back as it was not used
            board[i][j] = word[index];

        return find;
    }



public:
    bool exist(vector<vector<char>>& board, string word) {

        n = board.size();
        m = board[0].size();

        for(int i = 0; i<n; i++){

            for(int j = 0; j<m; j++){
                if(wordsearch(board, word, 0, i, j))
                    return true;
            }
        }

        return false;
    }
};
