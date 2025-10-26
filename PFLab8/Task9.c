#include <stdio.h>
int main()
{
    int matrix[3][3], transposerotate[3][3], tempo, counta=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element of (%d)row, (%d)column of the 3x3 matrix.\n", i+1, j+1);
            scanf("%d", &matrix[i][j]);
            transposerotate[j][i]=matrix[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        tempo=transposerotate[i][0];
        transposerotate[i][0]=transposerotate[i][2];
        transposerotate[i][2]=tempo;
        for (int j = 0; j < 3; j++)
        {
            if (transposerotate[i][j]==matrix[i][j])
            {
                counta++;
            }
        }
        
    }
     printf("\nThe Original Matrix\n");
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
           printf("%d\t", matrix[i][j]);   
        }
    printf("\n\n");
    }
    printf("\nRotated of the Matrix\n");
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
           printf("%d\t", transposerotate[i][j]);   
        }
    printf("\n\n");
    }
    if (counta==9)  printf("The matrix's rotation is same as the original matrix.\n");
return 0;
}