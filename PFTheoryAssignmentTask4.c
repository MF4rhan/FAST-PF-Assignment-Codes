#include <stdio.h>
int main()
{
    int c1,c2,c3,c4,c5;
    printf("Enter 1st number from a range of 1 to 13.\n");
    scanf("%d", &c1);
    printf("Enter 2nd number from a range of 1 to 13.\n");
    scanf("%d", &c2);
    printf("Enter 3rd number from a range of 1 to 13.\n");
    scanf("%d", &c3);
    printf("Enter 4th number from a range of 1 to 13.\n");
    scanf("%d", &c4);
    printf("Enter 5th number from a range of 1 to 13.\n");
    scanf("%d", &c5);
    if (0<c1 && c1<=13 && 0<c2 && c2<=13 && 0<c3 && c3<=13 && 0<c4 && c4<=13 && 0<c5 && c5<=13)
    {
         
   if (c1==c2 && c2==c3 && c4==c5 && c1!=c5)
   {
    printf("It is a full House.\n");
   }
   else if (c1==c2 && c2==c4 && c3==c5 && c1!=c3)
   {
    printf("It is a full House.\n");
   }
   else if (c1==c2 && c2==c5 && c3==c4 && c1!=c3)
   {
    printf("It is a full House.\n");
   }
   else if (c1==c3 && c3==c4 && c2==c5 && c1!=c2)
   {
    printf("It is a full House.\n");
   }
   else if (c1==c3 && c3==c5 && c2==c4 && c1!=c2)
   {
    printf("It is a full House.\n");
   }
   else if (c1==c4 && c4==c5 && c2==c3 && c1!=c2)
   {
    printf("It is a full House.\n");
   }
   else if (c2==c3 && c3==c4 && c1==c5 && c2!=c1)
   {
    printf("It is a full House.\n");
   }
   else if (c2==c3 && c3==c5 && c1==c4 && c2!=c1)
   {
    printf("It is a full House.\n");
   }
   else if (c2==c4 && c4==c5 && c1==c3 && c2!=c1)
   {
    printf("It is a full House.\n");
   }
   else if (c3==c4 && c4==c5 && c1==c2 && c3!=c1)
   {
    printf("It is a full House.\n");
   }
   else
   {
    printf("It is not a full house.\n");
   }
    }
    else
    {
        printf("Invalid Number, Please enter numbers between 1 and 13 only.");
    }
    
return 0;
}