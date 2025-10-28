#include <stdio.h>

void addnewbook(int isbns[], int quantities[], char titles [][50], float prices[], int *currentbookcount);
void processsale(int isbns[], int quantities[], int currentbookcount);
void generatereport(int isbns[], int quantities[], char titles[][50], float prices[], int currentbookcount);

int main()
{
    int isbns[100]={0}, quantities[100]={0}, currentbookcount=0, choice;
    char titles[100][50];
    float prices[100]={0};
    do
    {
        printf("\n1. Add a New Book.\n");
        printf("2. Process a Sale.\n");
        printf("3. Generate Low-Stock Report.\n");
        printf("4. Exit the Program.\n");
        printf("Enter your Choice.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addnewbook(isbns, quantities, titles, prices, &currentbookcount);
            break;
        case 2:
            processsale(isbns, quantities, currentbookcount);
            break;
        case 3:
            generatereport(isbns, quantities, titles, prices, currentbookcount);
            break;
        case 4:
            break;
        default:
            printf("Invalid Option, Please try again.\n\n");
            break;
        }
    } while (choice!=4);
    return 0;
}

void addnewbook(int isbns[], int quantities[], char titles [][50], float prices[], int *currentbookcount)
{
    int exist;
    do
    {
        exist=0;
        printf("\nEnter the book's ISBN.\n");
        scanf("%d", &isbns[*currentbookcount]);
        for (int i = 0; i < *currentbookcount; i++)
        {
            if (isbns[*currentbookcount]==isbns[i])
            {
                printf("This book already exists in the database, please enter another book.\n\n"); 
                isbns[*currentbookcount]=0;
                exist=1;
                break;
            } 
        }
    } while (exist==1);
    printf("Enter the Book's Title:\n");
    getchar(); //will get rid of the leftover \n.
    fgets(titles[*currentbookcount], sizeof(titles[*currentbookcount]), stdin);
    printf("Enter the Book's Price.\n");
    scanf("%f", &prices[*currentbookcount]);
    printf("Enter the quantities of the book.\n");
    scanf("%d", &quantities[*currentbookcount]);
    (*currentbookcount)++;
    printf("The book has successfully been added.\n");
}

void processsale(int isbns[], int quantities[], int currentbookcount)
{
    int bookisbn, copiessold, invalid;
    do
    {
        printf("\nEnter the ISBN of the Book.\n");
        scanf("%d", &bookisbn);
        printf("Enter the number of copies to be sold.\n");
        scanf("%d", &copiessold);
        invalid=0;
        for (int i = 0; i < currentbookcount; i++)
        {
            if (bookisbn==isbns[i])
            {
                if (copiessold>quantities[i])
                {
                    printf("Insufficient Stock, please try again.\n\n");
                    printf("The remaining stock of this book is %d.\n\n", quantities[i]);
                    invalid=1;
                    break;
                }
                else
                {
                    printf("Sale successful.\n");
                    quantities[i]-=copiessold;
                    break;
                }
            }
            else if (i==currentbookcount-1)
            {
                printf("The input ISBN code does not exist in the database, Please try again.\n");
                invalid=1;
                break;
            }
        }
    } while (invalid==1);
}

void generatereport(int isbns[], int quantities[], char titles[][50], float prices[], int currentbookcount)
{
    int found=0;
    for (int i = 0; i < currentbookcount; i++)
    {
        if (quantities[i]<5)
        {
            printf("\n ISBN:        %d", isbns[i]);
            printf("\n Title:       %s", titles[i]);
            printf(" Price:         %.2f", prices[i]);
            printf("\n Quantities:  %d\n", quantities[i]);
            found=1;
        }
    }
    if (found==0)
        printf("All books have sufficient stock of 5 or above.\n\n");
}
