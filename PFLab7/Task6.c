#include <stdio.h>
int main()
{
    //Name: Muhammad Farhan, Roll no: 25k-0538, BCS-1k.
    int num1[5]={0}, num2[5]={0};
    //Taking input for the 5 numbers.
    for (int i = 0; i <=4; i++)
   {
    printf("Enter your (%d)number (Total 5 numbers).\n", i+1);
    scanf(" %d", &num1[i]);
   }
   //Calculating the 2nd array and printing.
   printf("Original Numbers \t Updated Numbers");
   for (int i = 0; i <= 4; i++)
   {
    num2[i]=(num1[i]+10-5)*2;
    printf("\n\t%d\t\t\t%d", num1[i], num2[i]);
   }
return 0;
}