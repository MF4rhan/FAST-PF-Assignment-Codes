#include <stdio.h>
int square(int a);
int main()
{
	int a;
	printf("enter a number to get its square.\n");
	scanf("%d", &a);
	printf("\nThe Square is %d", square(a));
return 0;
}
int square(int a)
{
	return a*a;
}
