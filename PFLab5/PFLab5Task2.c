#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter the first number.\n");
	scanf("%d", &x);
	printf("Enter the second number.\n");
	scanf("%d", &y);
	printf("%d\n", x>5 && y<100);
	printf("%d\n", x==10 || y==5);
	printf("%d\n", !(x==y));
return 0;
}
