#include <stdio.h>
int main() {
 int Age;
 printf("Enter your age to check for your eligibility to Vote.\n");
 scanf("%d", &Age);
 if (Age>=18)
 {
   printf("You are eligibile to Vote.");
 }
 else
 {
   printf("You are not eligibile to Vote.");
 }
 return 0;
}