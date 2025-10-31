#include <stdio.h>
int main()
{
    int *p=NULL;
    if (p==NULL)
    {
        printf("The pointer doesn't reference to any valid memory.\n");
    }
    else
    {
        printf("The pointer references to a particular memory.\n");
    }
return 0;
}