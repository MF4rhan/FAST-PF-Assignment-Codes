#include <stdio.h>
int main()
{
    int nnn, sum=0;
    int i, f, a=0, b=1;
    printf("Enter the number up to which generate a Fibonacci Sequence.\n");
    scanf("%d", &nnn);
    for (i=0;i<=nnn;i++)
    {
       if (i==0)
       {
           printf("%d %d ",a,b);
       }
       else if (i%2==1)
       {
           f=a+b;
           a=f;
           sum+=f;
           printf("%d ", f);
       }
       else if (i%2==0)
       {
           f=a+b;
           b=f;
           sum+=f;
           printf("%d ", f);
       }
    }
    printf("\nThe sum of first %d Fibonacci numbers in the sequence is %d.", nnn, sum+1);
return 0;
}
