#include <stdio.h>
int main()
{
    int avgcount=0,g7=0,g5=0,g3=0;
    float grade, count=0;
    while (grade!=(-1))
    {
        printf("Enter your grade between 0 and 100 (Enter -1 to end).\n");
        scanf("%f", &grade);
        if (grade!=(-1))
        {
            if (grade>=70)
            {
                g7++;
            }
            else if (grade<70 && grade>=50)
            {
                g5++;
            }
            else
            {
                g3++;
            }
            printf("Your grade is %.2f.\n\n",grade);
            count+=grade;
            avgcount++;
        }
    }
    printf("your average grade is %.3f.\n", count/avgcount);
    printf("%d of your grades were 70 or above.\n", g7);
    printf("%d of your grades were between 50 and 70.\n", g5);
    printf("%d of your grades were less than 50.\n", g3);
return 0;
}
