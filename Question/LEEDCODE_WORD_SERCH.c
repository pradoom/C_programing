#include <stdio.h>
#include <string.h>

int dfs(char board[3][4], int rows, int cols,
        int i, int j, char *word, int idx) {
    if(word[idx]=='\0')
    {
        return 1;
    }
    if(i<0 || j<0 || i>=rows || j>=cols || board[i][j]=='#')
    {
        return 0;
    }
    if(board[i][j]!=word[idx])
    {
        return 0;
    }
    
    char temp = board[i][j];
    board[i][j] = '#';
    int dic[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    int k=0;
    
    for(k=0;k<4;k++)
    {
        int i_ = i+dic[k][0];
        int j_ = j+dic[k][1];
        
        if(dfs(board,rows,cols,i_,j_,word,idx+1))
        {
            return 1;
        }
    }
    board[i][j] = temp;
   return 0;
}

int exist(char board[3][4], int rows, int cols, char *word) {

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(board[i][j]==word[0])
            {
                if(dfs(board,rows,cols,i,j,word,0))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    char board[3][4] = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    char word[] = "SAE";

    if (exist(board, 3, 4, word))
        printf("Word exists in board\n");
    else
        printf("Word does NOT exist in board\n");

    return 0;
}
