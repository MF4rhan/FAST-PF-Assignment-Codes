#include <stdio.h>
int main()
{
    char a,b;
    int v=0, c=0;
    do
    {
        printf("Enter a alphabet.\n");
        scanf(" %c", &a);
        if (a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
        {
            v++;
        }
        else
        {
            c++;
        }
        printf("Do you want to continue? (y for yes/n for no.)\n");
        scanf(" %c", &b);
    }while (b=='y'||b=='Y');
    printf("The number of vowels you entered are %d\n", v);
    printf("The number of consonants you entered are %d\n", c);
return 0;
}
