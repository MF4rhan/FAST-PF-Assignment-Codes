#include <stdio.h>
int main()
{
    int matrix[3][3], transpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element of (%d)row, (%d)column of the matrix.\n", i+1, j+1);
            scanf("%d", &matrix[i][j]);
            transpose[j][i]=matrix[i][j];
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
    printf("\nTranspose of the Matrix\n");
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
           printf("%d\t", transpose[i][j]);   
        }
    printf("\n\n");
    }
return 0;
}