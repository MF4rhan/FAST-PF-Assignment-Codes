#include <stdio.h>
void move(int *i, int *j, char input, int board[6][6]);
int main()
{
    int board[6][6]={
        {7,0,0,0,0,0},
        {0,1,0,0,1,0},
        {0,0,1,0,0,0},
        {0,0,0,1,0,0},
        {0,1,0,1,1,0},
        {0,1,0,0,0,8},
    };
    char input;
    int i=0, j=0, won=0;
    do
    {
        for (int k = 0; k < 6; k++)
        {
            if (k==0) printf("\n+---+---+---+---+---+---+\n");
            
            for (int l = 0; l < 6; l++)
            {
                if (l==0)   printf("|");
                
                printf(" %d |", board[k][l]);
            }
            printf("\n+---+---+---+---+---+---+\n");
        }
        printf("Enter Direction W/A/S/D.\n");
        scanf(" %c", &input);
        board[i][j]=0;
        move(&i, &j, input, board);
        if (board[i][j]==8)
        {
            board[i][j]=7;
            printf("Congrats, You found the treasure.\n");
            won=1;
        }
        else board[i][j]=7;
        
    } while (won!=1);
return 0;
}

void move(int *i, int *j, char input, int board[6][6])
{
    if (input == 'W' && (*i)>0 && board[(*i)-1][(*j)]!=1)    (*i)--;
    else if (input == 'S' && (*i)<5 && board[(*i)+1][(*j)]!=1)    (*i)++;
    else if (input == 'A' && (*j)>0 && board[(*i)][(*j)-1]!=1)  (*j)--;
    else if (input == 'D' && (*j)<5 && board[(*i)][(*j)+1]!=1)    (*j)++;
    else printf("\nInvalid move, try again.\n");

}
