#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chess_board[8][8];
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            chess_board[i][j] = -1;
        }
    }
    int co_knight[2];
    printf("\n enter the coordinates of knight : ");
    scanf("%d %d",&co_knight[0],&co_knight[1]);
    int co_king[2];
    printf("\n enter the coordinates of king : ");
    scanf("%d %d",&co_king[0],&co_king[1]);
    chess_board[co_knight[0]][co_knight[1]] = 0;
    for(int k = 0; k < 7; k++)
    {
        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                if(chess_board[i][j]==k)
                {
                    if((i+2<9)&&(j+1<9)&&(chess_board[i+2][j+1]==-1))
                    {
                        chess_board[i+2][j+1] = k+1;
                    }
                    if((i+2<9)&&(j-1>-1)&&(chess_board[i+2][j-1]==-1))
                    {
                        chess_board[i+2][j-1] = k+1;
                    }
                    if((i+1<9)&&(j+2<9)&&(chess_board[i+1][j+2]==-1))
                    {
                        chess_board[i+1][j+2] = k+1;
                    }
                    if((i+1<9)&&(j-2>-1)&&(chess_board[i+1][j-2]==-1))
                    {
                        chess_board[i+1][j-2] = k+1;
                    }
                    if((i-2>-1)&&(j+1<9)&&(chess_board[i-2][j+1]==-1))
                    {
                        chess_board[i-2][j+1] = k+1;
                    }
                    if((i-2>-1)&&(j-1>-1)&&(chess_board[i-2][j-1]==-1))
                    {
                        chess_board[i-2][j-1] = k+1;
                    }
                    if((i-1>-1)&&(j+2<9)&&(chess_board[i-1][j+2]==-1))
                    {
                        chess_board[i-1][j+2] = k+1;
                    }
                    if((i-1>-1)&&(j-2>-1)&&(chess_board[i-1][j-2]==-1))
                    {
                        chess_board[i-1][j-2] = k+1;
                    }
                }
            }
        }
        if(chess_board[co_king[0]][co_king[1]]!=-1)
        {
            printf("\n minimum no. of steps equired are : %d",chess_board[co_king[0]][co_king[1]]);
            break;
        }
    }

    return 0;
}
