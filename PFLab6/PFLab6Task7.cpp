#include <stdio.h>
int main()
{
    float balance=5000, transaction;
    int depcount=0, withcount=0;
    printf("Enter your transaction amount (Enter 0 to Exit).\n");
    scanf("%f", &transaction);
    while (transaction!=0)
    {
        if (transaction>0)
        {
            balance+=transaction;
            depcount++;
        }
        else if (transaction<0)
        {
            balance+=transaction;
            withcount++;
        }
        printf("Current Balance: %.4f\n\n", balance);
        printf("Enter your transaction amount (Enter 0 to Exit).\n");
        scanf("%f", &transaction);
    }
    printf("Your final balance is %.4f.\n", balance);
    printf("You made %d Withdrawls and %d Deposits.\n", withcount, depcount);
return 0;
}
