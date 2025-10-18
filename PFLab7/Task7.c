#include <stdio.h>
int main()
{
    //Name: Muhammad Farhan, Roll no: 25k-0538, BCS-1k.
    int productID[10];
    int removalID, temp;
    //Input for the 10 Product IDs.
    for (int i = 0; i <=9; i++)
   {
    printf("Enter your product ID #%d.\n", i+1);
    scanf(" %d", &productID[i]);
   }
   //Input for the ID to Remove from the Array.
   printf("\nEnter the product ID you want to remove from the database.\n");
   scanf(" %d", &removalID);
   //Assigning 0 to the specified ID to be removed from the array.
   for (int i = 0; i <= 9; i++)
   {
    if (productID[i]==removalID)
        productID[i] = 0;
   }
   //The algorithm I have made to move all 0s to the very back of the Array, ensuring no gaps between other IDs.
   for (int i = 0; i <= 9; i++)
   {
    if (productID[i]==0)
    {
        for (int j = i+1; j <=9; j++)
        {
            if (productID[j]!=0)
            {
                temp=productID[j];
                productID[j]=productID[i];
                productID[i]=temp;
                break;
            }
            
        }
        
    }
    /* 
    And finally, printing the updated product ID list.
    Also, if we want, we can declare a int variable=0,
    And then make it increment inside the final loop of the shifting algorithm,
    that will count the number of times 0 is present in the array,
    And then in the end printing loop, we can put <=9-count in the loop condition,
    This will make it so that we won't print the 0s in the output if we desired.
    */
   }
   printf("The Updated List of Product IDs is:\n");
    for (int i = 0; i <=9; i++)
    printf("%d ", productID[i]);
return 0;
}