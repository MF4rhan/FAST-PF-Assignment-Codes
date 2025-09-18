#include <stdio.h>
int main()
{
    int num, num0=0, num1=0, num2=0, num3=0, num4=0, num5=0, num6=0, num7=0, num8=0, num9=0;
    printf("Enter a number between 1 and 9.\n");
    scanf("%d", &num);
        for (num;num>=0 && num<=9;num)
        {
            if (num==0)
            {
                num0++;
            }
            else if (num==1)
            {
                num1++;
            }
            else if (num==2)
            {
                num2++;
            }
            else if (num==3)
            {
                num3++;
            }
             else if (num==4)
            {
                num4++;
            }
             else if (num==5)
            {
                num5++;
            }
             else if (num==6)
            {
                num6++;
            }
            else if (num==7)
            {
                num7++;
            }
            else if (num==8)
            {
                num8++;
            }
            else if (num==9)
            {
                num9++; 
            }
            scanf("%d",&num);

        }
    printf("\n\n\n");
    printf("Number \t\t Number of Occurrences\n");
    printf("  0 \t\t\t   %d \n", num0);
    printf("  1 \t\t\t   %d \n", num1);
    printf("  2 \t\t\t   %d \n", num2);
    printf("  3 \t\t\t   %d \n", num3);
    printf("  4 \t\t\t   %d \n", num4);
    printf("  5 \t\t\t   %d \n", num5);
    printf("  6 \t\t\t   %d \n", num6);
    printf("  7 \t\t\t   %d \n", num7);
    printf("  8 \t\t\t   %d \n", num8);
    printf("  9 \t\t\t   %d \n", num9);
return 0;
}