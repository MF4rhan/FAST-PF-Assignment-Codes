#include <stdio.h>
void displayMatrix(int arr[2][3]);
int calculateSum(int arr[2][3]);
float calculateAverage(int arr[2][3]);
int findMax(int arr[2][3]);
int sumg;
int main()
{
	int matrix[2][3] =
	{
		{4,5,0},
		{1,9,3}
	};
	sumg=calculateSum(matrix);
	displayMatrix(matrix);
	printf("\n\n");
	printf("The sum of all Elemets is %d", calculateSum(matrix));
	printf("\n\n");
	printf("The average is %.3f", calculateAverage(matrix));
	printf("\n\n");
	printf("the maximum number is %d", findMax(matrix));
}

void displayMatrix(int arr[2][3])
{
	for(int i=0;i<2;i++)
	{
		for (int j=0; j<3;j++)
		{
			printf("%d   ");
		}
		printf("\n");
	}
}

int calculateSum(int arr[2][3])
{
	int sum=0;
	for(int i=0;i<2;i++)
	{
		for (int j=0; j<3;j++)
		{
			sum+=arr[i][j];
		}
	}
	sumg=sum;
return sum;
}

float calculateAverage(int arr[2][3], int sumg)
{
	int avg=0;
	avg=(sumg/6);
	return avg;
}

int findMax(int arr[2][3])
{
	int max=0;
		for(int i=0;i<2;i++)
	{
		for (int j=0; j<3;j++)
		{
			if(arr[2][3]>max)
			max=arr[2][3];
		}
	}
return max;
}
