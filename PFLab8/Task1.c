#include <stdio.h>
int main()
{
	int array[3][3], temparray[3][3];
	int a,b,c,d;
	int count1=0;
	for(a=0;a<3;a++)
	{
		for(b=0; b<3;b++)
		{
			printf("Enter the value for %d row %d column for matrix\n", a+1, b+1);
			scanf("%d", &array[a][b]);
			temparray[b][a]=array[a][b];
		}
	}
	for(c=0;c<3;c++)
	{
		for(d=0; d<3;d++)
		{
			if(array[c][d]==temparray[c][d])
			{
			count1++;
			}
		}
	}
	if(count1==9)
	printf("The matrix is symmetric.\n");
	else
	printf("The matrix is not symmetric.\n");
return 0;
}
