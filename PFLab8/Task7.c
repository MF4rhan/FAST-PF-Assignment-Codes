#include <stdio.h>
int main()
{
    int size;
    printf("Enter 2 for a 2x2 Matrix or 3 for a 3x3 Matrix.\n");
    scanf("%d", &size);
    int matrix1[size][size], matrix2[size][size], matrix3[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            matrix3[i][j]=0;
        }
        
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the element of (%d)row, (%d)column of the first matrix.\n", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
        
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the element of (%d)row, (%d)column of the second matrix.\n", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
        
    }
    printf("\n");
    for (int i=0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        
        }
    }
    printf("Multiplication of both Matrices\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n\n");
    }
    
return 0;
}