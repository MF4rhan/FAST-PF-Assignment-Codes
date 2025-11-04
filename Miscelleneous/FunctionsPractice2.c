#include <stdio.h>
int findcar(int IDs[], int *count, int searchID);
void addcar(int IDs[], char name[][20], int dailyrate[], int *count);
void retur(int ID[], int rented[], int *count);
void rent(int ID[], int rented[],int rates[], int *count);
void report(int ID[], char name[][20], int rates[], int rented[], int *count);
int main()
{
    int carIDs[50]={0}, dailyrate[50]={0}, isrented[50]={0}, carcount=0, choice; 
    char carnames[50][20]={0};
    do
    {
        printf("\n1. Add New car.");
        printf("\n2. Rent a car.");
        printf("\n3. Return a car.");
        printf("\n4. Generate Fleet Report.");
        printf("\n5, Exit.");
        printf("\nEnter your choice.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addcar(carIDs, carnames, dailyrate, &carcount);
            break;
        case 2:
            rent(carIDs, isrented, dailyrate, &carcount);
            break;
        case 3:
            retur(carIDs, isrented, &carcount);
            break;
        case 4:
            report(carIDs, carnames, dailyrate, isrented, &carcount);
            break;
        case 5:
            break;
        default:
        printf("\nInvalid Choice, please try again.\n");
            break;
        }

    } while (choice!=5);
    
}

int findcar(int IDs[], int *count, int searchID)
{
    int found=0, i;
    for (i = 0; i < (*count); i++)
    {
        if (searchID==IDs[i])
        {
            found=1;
            return i;
        }
    }
    if (found==0)
        return -1;
}

void addcar(int IDs[], char name[][20], int dailyrate[], int *count)
{
    int tempid, index;
    printf("\nEnter Car ID.\n");
    scanf("%d", &tempid);
    index = findcar(IDs, count, tempid);
    if (index==-1)
    {
        printf("Enter Car's Model name.\n");
        getchar();
        fgets(name[*count], sizeof(name[*count]), stdin);
        printf("\nEnter the car's daily rate.\n");
        scanf("%d", &dailyrate[*count]);
        printf("\nThe car has been successfully been added.\n");
        IDs[*count]=tempid;
        (*count)++;
    }
    else
    {
        printf("The input already exists in the fleet.\n");
    }
}

void rent(int ID[], int rented[],int rates[], int *count)
{
    int tempid, index;
    printf("\nEnter the Car ID.\n");
    scanf("%d", &tempid);
    index = findcar(ID, count, tempid);
    if (index!=-1)
    {
        if (rented[index]==1)
        {
            printf("\nSorry, this car is already on rent.\n");
        }
        else
        {
            printf("\nThe car is avaliable to rent.\n The daily rate is: %d.\n", rates[index]);
            printf("The car has been successfully rented.\n");
            rented[index]=1;
        }
    }
    else
    {
        printf("\nError: No car found in the database.\n");
    }
}

void retur(int ID[], int rented[], int *count)
{
    int tempID, index;
    printf("\nEnter the Car ID.\n");
    scanf("%d", &tempID);
    index=findcar(ID, count, tempID);
    if (index!=-1)
    {
        if (rented[index]==0)
        {
            printf("\nThe car is already in the lot.\n");
        }
        if (rented[index]==1)
        {
            printf("\nThe car has been successfully returned.\n");
            rented[index]=0;
        }
    }
    else
    {
        printf("Error: Car ID not found.\n");
    }
}

void report(int ID[], char name[][20], int rates[], int rented[], int *count)
{
    printf("\nCar ID\tCar Name\t Daily Rate\tStatus\n");
    for (int i = 0; i < (*count); i++)
    {
        printf("%d\t%s\t%d\t", ID[i], name[i], rates[i]);
        if (rented[i]==1)
        {
            printf("Rented\n");
        }
        else if (rented[i]==0)
        {
            printf("Not Rented\n");
        }
    }
}