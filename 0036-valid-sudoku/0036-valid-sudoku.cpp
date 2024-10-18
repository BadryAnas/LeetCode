class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0 ; i < 9; i++)
        {
            map<int , bool>mp1;
            map<int , bool>mp2;
            for(int j = 0 ; j < 9 ; j++)
            {
                if(mp1[board[i][j]] && board[i][j] != '.')
                    return false;
                else
                    mp1[board[i][j]] =  true;

                if(mp2[board[j][i]] && board[j][i] != '.')
                    return false;
                else
                    mp2[board[j][i]] =  true;
            }
        }

        int rows = 0 , col = 0;
        while(true )
        {
            map<int , bool>mp3;
            for(int i = 0 ; i < 3 ; i++)
            {
                for(int j = 0 ; j < 3 ; j++)
                {
                    if(mp3[board[i+rows][j+col]] && board[i+rows][j+col] != '.')
                        return false;
                    else
                        mp3[board[i+rows][j+col]] = true;
                }
            }  
            if(rows == 6 && col == 6)
                break;
            else
            {
                if(col == 6)
                {
                    col = 0;
                    rows +=3;
                }
                else
                {
                    col+=3;
                }
            }
        }

        return true;
    }
};