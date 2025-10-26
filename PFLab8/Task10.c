#include <stdio.h>
int main()
{
    int nfactorial=1, nrfactorial=1, rfactorial=1, ncr, nr, rows;
    printf("Enter the number of rows for the Pascal Triangle.\n");
    scanf("%d", &rows);
    printf("\n");
    for (int i = 0; i < rows; i++) //printing number of rows
    {
        nfactorial=1; //resetting n! to 1 for fresh value of n! for each row
        for (int n = 1; n <= i; n++) //calculating n!
        {
            nfactorial*=n;
        }
        for (int k = rows-1-i; k >0; k--) //printing spaces for centering, which are totalrows-1
        {
            printf(" ");
        }
        for (int j = 0; j <= i ; j++)
        { 
            nr=i-j; //calculating (n-r)
            for (int r=1; r <= nr; r++) //calculating (n-r)!
            {
                nrfactorial*=r;
            }
            for (int r=1; r <= j; r++) //calculating r!
            {
                rfactorial*=r;
            }
            
            ncr=nfactorial/(rfactorial*nrfactorial); //calulating nCr
            printf("%d ", ncr); //printing nCr
            nrfactorial=1; //reseting (n-r)! and r! to 1 for a fresh calculation for next element
            rfactorial=1;
        }
        printf("\n"); //going to next line
    }
return 0;
}