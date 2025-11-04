#include <stdio.h>
#include <string.h>
int main()
{
    char secret[30]="winning is winning";
    int length = strlen(secret);
    char guessstr[length+1];
    char guess;
    int found=0, tries=7;
    for (int i = 0; i < length; i++)  
    {
        if (secret[i]==' ') guessstr[i]=' ';
        else    guessstr[i]='_';
    }
    guessstr[length]='\0';
    do
    {
        found=0;
        printf("\nYou have %d tries remaining, Enter your letter.\n", tries);
        scanf(" %c", &guess);
        printf("\n");
        for (int i = 0; i < length; i++)
        {
            if (guess == secret[i]) guessstr[i]=guess;
        }
        printf("%s", guessstr);
    for (int i = 0; i < length; i++)
    {
        if (guessstr[i]=='_')   found=1;
    }
    if (found==0)   printf("\nYou guessed the Word!\n");
    tries--;
    if (tries==0 && found!=0)   printf("\nYou ran out of tries!.\n");
    
    printf("\n");
    }while (tries!=0 && found!=0);
    
}