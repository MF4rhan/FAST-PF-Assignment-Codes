#include <stdio.h>
int main()
{
     //Name: Muhammad Farhan, Roll no: 25k-0538, BCS-1k.
    char string[100];
    int n=0;
    printf("Enter your String.\n");
    fgets(string,sizeof(string), stdin);
    for (int i = 0; i <sizeof(string); i++)
    {
            switch (string[i])
            {
            case 'a': string[i]='A'; break;
            case 'e': string[i]='E'; break;
            case 'i': string[i]='I'; break;
            case 'o': string[i]='O'; break;
            case 'u': string[i]='U'; break;
            default:
                break;
            }
    }
    printf("%s", string);
return 0;
}