#include <stdio.h>
#include <string.h>
void reverse(char message[100], int length);
void toggle(char message[100], int length);
int main()
{
    int choice, length;
    char message[100]={0};
    do
    {
        printf("\n1. Encode Message.");
        printf("\n2. Decode Message.");
        printf("\n3. Exit.");
        printf("\nEnter your choice.\n");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            printf("\nEnter your Message.\n");
            fgets(message, sizeof(message), stdin);
            length=strlen(message);
            reverse(message, length);
            toggle(message, length);
            printf("\nThe Encoded message is:\n");
            printf("%s", message);
            printf("\n\n");
            break;
        case 2:
            printf("\nEnter your Encoded Message.\n");
            fgets(message, sizeof(message), stdin);
            length=strlen(message);
            if (message[length-1] == '\n') 
            {
                message[length-1] = '\0';
                length--;
            }
            toggle(message, length);
            reverse(message, length);
            printf("\nThe Decoded message is:\n");
            printf("%s", message);
            printf("\n\n");
            break;
        case 3:
            break;
        default:
            printf("\nInvalid Choice, please try again.\n");
            break;
        }
    } while (choice!=3);
    
}

void reverse(char message[100], int length)
{
    char temp;
    int i,j=length-1;
    for (i = 0; i < j; i++, j--)
    {
        temp=message[i];
        message[i]=message[j];
        message[j]=temp;
    }
}

void toggle(char message[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        message[i] ^= (1 << 1);
        message[i] ^= (1 << 4);
    }
}
