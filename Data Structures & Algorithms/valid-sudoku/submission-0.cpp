class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return validateBoxes(board)&&validateRows(board)&&validateColumns(board);
    }
    bool validateBoxes(vector<vector<char>>& board){
        unordered_map <char,int> sudoko;
        for(int row  =0 ; row < 9 ; row += 3){
            for(int column = 0; column< 9 ; column+=3){
                sudoko  = {};
                for(int startrow = row; startrow<row+3; startrow++){

                    for(int startcolumn = column ; startcolumn< column+3 ; startcolumn++){
                        sudoko[board[startrow][startcolumn]]++;
                         if (sudoko[board[startrow][startcolumn]] >=2 && board[startrow][startcolumn] !='.') {
    return false;
  }
                    }
                }
            }
        }
        return true;
    }
    bool validateRows(vector<vector<char>>& board){
            unordered_map<char, int> sudoko;
            for(int row = 0;row<9;row++){
                sudoko = {};
                for(int column = 0;column<9;column++){
 sudoko[board[row][column]]++;
  if (sudoko[board[row][column]] >=2 && board[row][column] !='.') {
    return false;
  }
                }

               
            }
            return true;

    }
    bool validateColumns(vector<vector<char>>& board){
          unordered_map<char, int> sudoko;
            for(int column = 0;column<9;column++){
                sudoko = {};
                for(int row = 0;row<9;row++){
 sudoko[board[row][column]]++;
  if (sudoko[board[row][column]] >=2 && board[row][column] !='.') {
    return false;
  }
                }

               
            }
            return true;

    }
};
