#include <stdio.h>
int main()
{
    int Pass;
    printf("Enter your Password (Integers Only).\n");
    scanf("%d",&Pass);
    if (Pass==0000)  // 0000 could be any predefined value.
    {
        printf("Access Granted.");
    }
    else
    {
        printf("Acess Denied.");
    }
return 0;
}