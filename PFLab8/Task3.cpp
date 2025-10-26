#include <stdio.h>
int main()
{

int size, sump=0, sums=0, sumall=0;
printf("Enter the size of square matrix.\n");
scanf("%d", &size);
int matrix[size][size];
for(int a=0;a<size;a++)
	{
		for(int b=0; b<size;b++)
		{
			printf("Enter the element of %d row and %d column of square matrix.\n", a+1, b+1);
			scanf("%d", &matrix[a][b]);
			if(a==b)
			sump+=matrix[a][b];
			if(a+b==size-1)
			sums+=matrix[a][b];
		}
	}
	sumall=sump+sums;
	if (size%2!=0)
	{
		sumall = sumall-matrix[size/2][size/2];
	}
	printf("The sum of the primary diagonal is %d\n", sump);
	printf("The sum of the secondary diagonal is %d\n", sums);
	printf("The total sum of both diagonals is %d\n", sumall);

return 0;
}
