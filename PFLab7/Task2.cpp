#include <stdio.h>
int main()
{
	int array[10];
	int sume=0, sumo=0;
	for (int i=1;i<=10;i++)
		{
			printf("Enter %d(st/nd/rd/th) number.\n", i);
			scanf("%d", &array[i-1]);
		}
	for(int i=0;i<=9;i++)
	{
		if(array[i]%2==0)
		{
			sume+=array[i];
		}
		else if (array[i]%2==1)
		{
			sumo+=array[i];
		}
		else
		{
			printf("%d is neither even nor odd.\n", array[i]);
		}
	}
	printf("Even Sum: %d", sume);
	printf("\nOdd Sum: %d", sumo);
return 0;
}
