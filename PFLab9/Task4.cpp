#include <stdio.h>
int findMax(int arr[10]);
int main()
{
	int matrix[10]={12, 85, 73, 94, 63, 25, 96, 19,57, 49};
	printf("The maximum value is %d.", findMax(matrix));
return 0;
}

int findMax(int arr[10])
{
	int max=0;
		for(int i=0;i<10;i++)
	{
		if (arr[i]>max)
		max=arr[i];
	}
return max;
}
