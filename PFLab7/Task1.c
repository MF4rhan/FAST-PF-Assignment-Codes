#include <stdio.h>
int main()
{
	int array1[10];
	int tempovar,sumnum=0;
	for (int i=1;i<=10;i++)
	{
		printf("Enter %d(st/nd/rd/th) number.\n", i);
		scanf("%d", &array1[i-1]);
	}
	printf("Original Array:");
	for(int i=0;i<=9;i++)
		printf("%d ", array1[i]);
		
	for (int i=0;i<=4;i++)
	{
		tempovar=array1[9-i];
		array1[9-i]=array1[i];
		array1[i]=tempovar;
	}
	printf("\nReverse Array:");
	for (int i=0; i<=9; i++)
	printf("%d ", array1[i]);
	printf("\nThe sum is: ");
	for (int i=0; i<=9; i++)
		sumnum+=array1[i];
	printf("%d",sumnum);
return 0;
}
