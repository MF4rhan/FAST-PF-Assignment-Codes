#include <stdio.h>
int main()
{
    int k=0, rows, totalrows;
    printf("Enter the number of rows of the top half of the diamond.\n");
    scanf("%d", &rows);
    totalrows=rows*2-1;
    for (int i=1; i<=totalrows; i++)
    {
        i<=rows?k++:k--;
        for(int j=1; j<=totalrows; j++)
        {
            if (j>=rows+1-k && j<=rows-1+k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
return 0;
}