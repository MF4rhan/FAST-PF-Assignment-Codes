#include <stdio.h>
int main()
{
	char array[20];
	char target;
	int targetcount=0;
	printf("Enter your word/string.\n");
	fgets(array, sizeof(array), stdin);
	printf("Enter your target letter.\n");
	scanf(" %c", &target);
	for (int i=0; i<=19; i++)
	{
		if (array[i]==target)
		targetcount++;
	}
	if (targetcount==0)
	printf("The target letter does not exist in your input string.\n");
	else
	printf("There were %d occurences of %c in your input string.",targetcount, target);
}
