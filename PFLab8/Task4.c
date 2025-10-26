#include <stdio.h>
int main()
{
    int matrix[3][3], upper=0, lower=0;
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element of (%d)row, (%d)column of the matrix.\n", i+1, j+1);
            scanf("%d", &matrix[i][j]);
            if (i>j && matrix[i][j]==0)
                upper++;
            if (i<j && matrix[i][j]==0)
                lower++;
            
        }
        
    }
    if (upper==3 && lower==3)
        printf("\n\nThe input matrix is a Both a Upper and Lower Triangular Matrix.\n");
    else if (upper==3)
        printf("\n\nThe input matrix is a Upper Triangular Matrix.\n");
    else if (lower==3)
        printf("\n\nThe input matrix is a Lower Triangular Matrix.\n");
    else
        printf("\n\nThe input matrix is not a Triangular Matrix.\n");
return 0;
}