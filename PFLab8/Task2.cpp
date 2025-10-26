#include <stdio.h>
int main()
{
	int size, a, b, c;
	printf("Enter the size of the triangle.\n");
	scanf("%d", &size);
	int tempo=size-1;
	for(a=1; a<=size; a++)
	{
		for(b=tempo; b>=1;b--)
		{
			printf(" ");
		}
		for (c=1; c<=a;c++)
		{
		printf("%d", c);
		}
		printf("\n");
		tempo--;
	}
}
