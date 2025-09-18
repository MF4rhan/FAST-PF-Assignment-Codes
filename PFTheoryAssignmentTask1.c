#include <stdio.h>
int main()
{
    //Declare variables.
int TransactionAmount, TransactionThisHour, DailyTotal; 
int Country, Country1=17, Country2=35;
/*
Here we will assume the country is being picked from a dropdown selection list.
The system will detect and check the numerical placement of the country in the list.
*/
    printf("Welcome to the Bank.\n");
    printf("Enter your total previous transaction amount of today.\n"); //previous transactions amount of the day
    scanf("%d", &DailyTotal);
    printf("Enter the number of transactions you have made in this hour.\n"); //number of transactions made this hour
    scanf("%d", &TransactionThisHour);
    printf("Select a country from the list.\n"); //the country where transaction is being made from
    scanf("%d", &Country);
    printf("Enter your desired transaction amount.\n"); //desired transaction amount
    scanf("%d", &TransactionAmount);
   if (DailyTotal+TransactionAmount>5000)
     // checking if the sum of previous transactions and the current transaction exceeds 5000 or not.
   {
    printf("Account access blocked, Kindly contanct our customer care to unlock it");
     //suspicious transaction flagged for investigation.
   }
   else if (TransactionThisHour + 1>3)
     //checking the transactions made this hour exceed 3 or not.
   {
    printf("Account access blocked, Kindly contanct our customer care to unlock it");
     //suspicious transaction flagged for investigation.
   }
   else if (Country==Country1 || Country==Country2)
     //checking if the transaction is being made at the home country of the client or not.
   {
     //Transaction is Normal.
    printf("Transaction successful, Have a nice day.");
   }
   else
   {
    printf("Account access blocked, Kindly contanct our customer care to unlock it");
     //suspicious transaction flagged for investigation.
   }
   return 0;
}