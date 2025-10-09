#include <stdio.h>
int main()
{
    int num,bnum=0,snum=0,i=1;
    char z;
    do
    {
        printf("\nEnter a number.\n");
        scanf("%d", &num);
        if (i==1)
        {
            bnum=num;
            snum=num;
            i=0;
        }
        if (num>bnum)
        {
            bnum=num;
        }
        else if (num<bnum && num<snum)
        {
            snum=num;
        }
        printf("Do you want to continue? (y/n)\n\n");
        scanf(" %c", &z);
    } while (z=='y'||z=='Y');
    printf("The largest number was %d.\n", bnum);
    printf("The smallest number was %d.\n", snum);
return 0;
}
