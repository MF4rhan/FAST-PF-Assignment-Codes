#include <stdio.h>
int main()
{
    int rows, totalrows, spaces, stars;
    printf("Enter the number of rows for the upper half of the diamond.\n");
    scanf("%d", &rows);
    printf("\n");
    totalrows=rows*2-1;
    spaces=rows-1;
    for (int i = 1; i <= totalrows; i++)
    {
        i<=rows?stars=i:stars--;
        for (int s=1;s<=spaces;s++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= stars ; j++)
        { 
            printf("* ");
        }
        printf("\n"); 
        i<rows?spaces--:spaces++;
    }
return 0;
}