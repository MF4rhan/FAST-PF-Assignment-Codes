#include <stdio.h>

int main()
{
	int arr[5];
	for(int j=0;j<5;j++)
	{
		printf("Enter the %d element of array.\n", j+1);
		scanf("%d", &arr[j]);
	}
	int *p = arr;
	for(int i=0;i<5;i++)
	printf("\nAddress of arr[%d] : %d, value: %d\n",i, (p+i), *(p+i));
	return 0;
}
