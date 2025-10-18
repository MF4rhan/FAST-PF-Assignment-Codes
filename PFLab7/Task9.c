#include <stdio.h>
int main()
{
     //Name: Muhammad Farhan, Roll no: 25k-0538, BCS-1k.
    int array1[5], array2[5], array3[10];
    //input for first array.
    for (int i = 0; i <=4; i++)
   {
    printf("Enter (%d)number for the first set.\n", i+1);
    scanf(" %d", &array1[i]);
   }
   //input for second array.
   printf("\n");
    for (int i = 0; i <=4; i++)
   {
    printf("Enter number(%d) for the second set.\n", i+1);
    scanf(" %d", &array2[i]);
   }
   //combining first and second array.
   for (int i = 0; i <= 4; i++)
   {
    array3[i]=array1[i];
    array3[i+5]=array2[i];
   }
   //printing the final merged array.
   printf("The merged survery results are:\n");
   for (int i = 0; i <=9; i++)
    printf("%d ", array3[i]);
return 0;
}