#include <stdio.h>
int main()
{
    int matrix[3][3];
    int counteven=0, countodd=0, countzero=0, countneg=0, countpos=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element of (%d)row, (%d)column of the matrix.\n", i+1, j+1);
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j]>0)     countpos++;
            if (matrix[i][j]%2!=0)  countodd++;
            if (matrix[i][j]%2==0)  counteven++;
            if (matrix[i][j]==0)    countzero++;
            if (matrix[i][j]<0)     countneg++;
        }
        
    }
    printf("\n");
printf("There are %d positive elements in the matrix.\n", countpos);
printf("There are %d negative elements in the matrix.\n", countneg);
printf("There are %d zero elements in the matrix.\n", countzero);
printf("There are %d even elements in the matrix.\n", counteven);
printf("There are %d odd elements in the matrix.\n", countodd);
return 0;   
}