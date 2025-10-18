#include <stdio.h>
int main()
{
    //Name: Muhammad Farhan, Roll no: 25k-0538, BCS-1k.
   int temp, mid1=0, mid2=0, k, m;
   float avg=0;
   /*
   Asking user how many student scores they want to input in Total.
   The Task itself states 10 integers.
   However, that would always end up with the Even Median formula.
   Therefore, I have added this Extra functionality after learning it from Task 10.
   In this way, the user can try the Odd median formula as well if they want.
   */
   printf("How many student scores do you want to input in total? (Task states 10)\n");
   scanf("%d", &m);
    int score[m];
   //Taking user input for the student scores in any order.
   for (k = 0; k <m; k++)
   {
    printf("Enter your student score #%d:\n", k+1);
    scanf(" %d", &score[k]);
   }
   //Below is the ascending order sorting algorithm that I have made.
    for (int i = 0; i <m; i++)
    {
        for (int j = i+1; j <m; j++)
        {
            if (score[i]>score[j])
            {
                temp=score[j];
                score[j]=score[i];
                score[i]=temp;
            }
        }

    }
    //print sorted array.
    printf("The sorted scores are:\n");
    for (int i = 0; i < m; i++)
        printf("%d ", score[i]);
    printf("\n");
    //Median calculation section.
    if (m==1)
        printf("\nThe median is %d.", score[0]);
    else if (m%2==1)
    {
        mid1=score[m/2];
        printf("\nThe median is %d.", mid1);
    }
    else
    {
        mid1=score[(m/2)-1];
        mid2=score[m/2];
        avg=(mid1+mid2)/2.0;
        printf("\nThe median is %.3f.", avg);
    }
    
return 0;
}