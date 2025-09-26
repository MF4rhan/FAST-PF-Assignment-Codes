#include <stdio.h>
int main()
{
int value;
printf("Please enter a value in the range of 1 to 7: ");
scanf("%d", &value);

if (value == 1)
{
 printf("The day is Monday.");
}
else if (value == 2)
{
 printf("The day is Tuesday.");
}
else if (value == 3)
{
 printf("The day is Wednesday.");
}
else if (value == 4)
{
 printf("The day is Thrusday.");
}
else if (value == 5)
{
 printf("The day is Friday.");
}
else if (value == 6)
{
 printf("The day is Saturday.");
}
else if (value == 7)
{
 printf("The day is Sunday.");
}
else
{
 printf("You entered a value out of range.");
}
return 0;
}