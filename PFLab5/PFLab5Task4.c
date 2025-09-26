#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter the first number.\n");
	scanf("%d", &a);
	printf("Enter the second number.\n");
	scanf("%d", &b);
	(a>b)?printf("%d is greater than %d", a, b):printf("%d is greater than %d", b, a);
return 0;
}
