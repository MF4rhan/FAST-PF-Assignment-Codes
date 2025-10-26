#include <stdio.h>
int main()
{
    int rows, a, b, c, d;
    printf("Enter the number of rows of the Pascal's Triangle.\n");
    scanf("%d", &rows);
    if (rows%2==0)
    {
        a=0;
        b=1;
        c=1;
        d=0;
    }
    else
    {
        a=0;
        b=0;
        c=1;
        d=1;
    }
    
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows*2-1; j++)
        { 
            if (j>=rows+1-i && j<=rows-1+i)
            {
                if (i%2==a)
                {
                    if (j%2==b)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                    
                }
                if (i%2==c)
                {
                    if (j%2==d)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                    
                }

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