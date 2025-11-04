#include <stdio.h>
#include <string.h>
int main()
{
    char secret[6]="apple";
    char words[6][6];
    char guess[6];
    int guesscount=0;
    int limit=0, correctcount=0;

   do
   {
        printf("Enter the five-letter word:");
        scanf("%s", &guess);
        correctcount=0;
        
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                limit=0;
                if (guess[i]==secret[i])
                {
                    words[guesscount][i]='#';
                    limit=1;
                    correctcount++;
                    break;
                }
                else if (guess[i]==secret[j])
                {
                    words[guesscount][i]='+';
                    limit=1;
                    break;
                }
            }
            if (limit==0)
            {
                words[guesscount][i]='-';
            }
        }

        for (int i = 0; i < guesscount+1; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%c  ", words[i][j]);
            }
            printf("\n");
        }
        if (correctcount==5)
        {
            printf("\nYou won!\n");
        }
        
        
    guesscount++;
   } while (correctcount!=5 && guesscount!=6);
return 0; 
}