#include <stdio.h>
int main()
{
     //Name: Muhammad Farhan, Roll no: 25k-0538, BCS-1k.
    int n, index, mod;
    //input for the number of elements for array size.
    printf("How many elements do you want to input?\n");
    scanf("%d", &n);
    //declaring the array with specified size.
    int array[n];
    //inputting elements into array.
    for (int i = 0; i < n; i++)
    {
        printf("Enter element#%d.\n", i+1);
        scanf("%d", &array[i]);
    }
    //printing the contents of array.
    printf("The contents of the array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    //asking for the index to modify that element and with what integer to modify it with.
    do
    {
        printf("\n\nWhat element do you want to modify? (specify the index 0 - %d)\n", n-1);
        scanf("%d", &index);
        if (index<0 || index>=n)
        {
            printf("Invalid Input, Please try again.\n\n");
        }
    } while (index<0 || index>=n);
    printf("Input the integer you want to modify it with.\n");
    scanf("%d", &mod);
    array[index]=mod;
    //printing the updated contents.
    printf("The updated contents of the array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
return 0;
}