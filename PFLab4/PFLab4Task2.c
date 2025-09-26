#include <stdio.h>
int main() {
 int Num;
 printf("Enter any number to check if its Even or Odd.\n");
 scanf("%d", &Num);
 if (Num%2==0)
 {
   printf("It is an Even Number.");
 }
 else
 {
   printf("It is an Odd Number.");
 }
 return 0;
}