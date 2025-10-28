#include <stdio.h>
#include <string.h>
int customerinfo(int customercnic, char customernames[]);
void inventory(int productcodes[], int stock[], int prices[]);
float shoppingcart(int cart[], int quantity[], int productcodes[], int prices[], int stock[], float totalbill);
void billinvoice(float totalbill,int cart[], int quantity[], int prices[], int customercnic, char customernames[]);
int main()
{
    int customercnic, productcodes[4]={1,2,3,4}, stock[4]={50, 10, 20 ,8}, prices[4]={100,200,300,150};
    int cart[4]={0}, quantity[4]={0};
    float totalbill=0;
    char customernames[50]={0};
    int choice;
    do
    {
        printf("\n\n");
        printf("1. Enter Customer Information.\n");
        printf("2. Display Inventory.\n");
        printf("3. Add Items to Cart.\n");
        printf("4. Display Total Bill and Invoice.\n");
        printf("5. Exit the Program.\n");
        printf("Enter your choice.\n");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            customercnic = customerinfo(customercnic, customernames);
            break;
        case 2:
            inventory(productcodes, stock, prices);
            break;
        case 3:
            totalbill=shoppingcart(cart, quantity, productcodes, prices, stock, totalbill);
            break;
        case 4:
            billinvoice(totalbill, cart,quantity,prices,customercnic,customernames);
            break;
        case 5:
            break;
        default:
            printf("Invalid choice, Please try again.\n\n");
            break;
        }
    } while (choice!=5);
    
}

int customerinfo(int customercnic, char customernames[])
{
    printf("Enter Customer Name.\n");
    getchar();
    fgets(customernames, 50, stdin);
    printf("\nEnter Customer CNIC.\n");
    scanf("%d", &customercnic);
    return customercnic;
}

void inventory(int productcodes[], int stock[], int prices[])
{
    printf("Product Code\tQuantity in Stock\tPrice per Product.\n");
    for (int i = 0; i < 4; i++)
        printf("\n%d\t\t%d\t\t\t%d", productcodes[i], stock[i], prices[i]);
}

float shoppingcart(int cart[], int quantity[], int productcodes[], int prices[], int stock[], float totalbill)
{
    int choice,ID, num;
    do
    {
        printf("\nProduct ID\tPrice");
        for (int i = 0; i < 4; i++)
            printf("\n%d\t\t%d", productcodes[i], prices[i]);
        printf("\nEnter product ID to add to cart.\n");
        scanf("%d", &ID);
        printf("Enter quantity.\n");
        scanf("%d", &num);
        for (int i = 0; i < 4; i++)
        {
            if (ID==productcodes[i])
            {
                if (num>stock[i])
                    printf("Not enough stock. Only %d available.\n", stock[i]);
                else
                {
                cart[i]=productcodes[i];
                quantity[i]=num;
                totalbill+=(prices[i]*num);
                stock[i]-=num;
                break;
                }
            }
        }
        do
        {
            printf("\n1. Add another Product.\n2.Go to Main Menu.\nEnter your choice.\n");
            scanf("%d", &choice);
            if (choice==1 || choice==2)
                break;
            else
                printf("Invalid Choice, please try again.\n");
        } while (choice!=1 && choice!=2);
    } while (choice!=2);
return totalbill;
}

void billinvoice(float totalbill,int cart[], int quantity[], int prices[], int customercnic, char customernames[])
{
    int choice; 
    float discount=0;
    char inputpromo[20]={0}, promo[]="Eid2025";
    printf("\nCustomer Name: %s", customernames);
    printf("\nCustomer CNIC: %d", customercnic);
    printf("\nProduct Code\tProduct Quantity\tPrice per Item");
    for (int i = 0; i < 4; i++)
    {
        if (cart[i]!=0)
            printf("\n%d\t\t%d\t\t\t%d",cart[i], quantity[i], prices[i]);
    }
    printf("\nTotal Bill:\t%.2f", totalbill);
    do
    {
        printf("\n\n1. Enter promocode.\n2. Complete Order.\nEnter your Choice.\n");
        scanf("%d", &choice);
        if (choice==1)
        {
            printf("\nEnter your promocode\n");
            scanf(" %s", inputpromo);
            if (strcmp(inputpromo, promo) == 0)
            {
                printf("\nPromocode Accepted, 25% discount applied.\n");
                discount=(totalbill*0.25);
                totalbill-=(totalbill*0.25);
                break;
            }
            else
                printf("Invalid Promocode, Please try again.\n");
        }
        else if (choice!=2)
            printf("\nInvalid Choice, please try again.\n");

    } while (choice!=2);
    printf("\n\n");
    printf("\tThe Final Invoice\n");
    printf("\nCustomer Name: %s", customernames);
    printf("\nCustomer CNIC: %d", customercnic);
    printf("\nProduct Code\tProduct Quantity\tPrice per Item");
    for (int i = 0; i < 4; i++)
    {
        if (cart[i]!=0)
            printf("\n%d\t\t%d\t\t%d",cart[i], quantity[i], prices[i]);
    }
    if (discount!=0)
    {
        printf("\nDiscount after Promocode: %.2f", discount);
    }
    printf("\nTotal Bill:\t%.2f", totalbill);
}