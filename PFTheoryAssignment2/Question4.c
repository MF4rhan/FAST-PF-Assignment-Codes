#include <stdio.h>
void push(int stack[5], int size);
void pop(int stack[5], int size);
void peek(int stack[5], int size);
void display(int stack[5], int size);
int main()
{
    int choice, size;
    printf("Enter the size of your Stack.\n");
    scanf("%d", &size);
    int stack[size];
    for (int i = 0; i < size; i++)
        stack[i]=0;
    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push(stack, size);
            break;
        case 2:
            pop(stack, size);
            break;
        case 3:
            peek(stack, size);
            break;
        case 4:
            display(stack, size);
            break;
        case 5:
            break;
        default:
        printf("\nInvalid input, please try again.\n");
            break;
        }
    } while (choice!=5);
    
}

void push(int stack[5], int size)
{
    int element;
    printf("\nEnter the integer to Push\n");
    scanf("%d", &element);
    for (int i = 0; i < size; i++)
    {
        if (stack[i]==0)
        {
            stack[i]=element;
            printf("The element has been pushed.\n");
            break;
        }
        else if (i==4 && stack[i]!=0)
        {
            printf("The element cannot be pushed, the stack is full.\n");
            break;
        }
    }
}

void pop(int stack[5], int size)
{
    for (int i = size-1; i > -1; i--)
    {
        if (stack[i]!=0)
        {
            stack[i]=0;
            printf("The element has been popped.\n");
            break;
        }
        else if (i==0 && stack[i]==0)
        {
            printf("The stack is empty, it cannot be popped.\n");
            break;
        }
    }
}

void peek(int stack[5], int size)
{
    for (int i = size-1; i > -1 ; i--)
    {
        if (stack[i]!=0)
        {
            printf("The top stack is %d.\n", stack[i]);
            break;
        }
    }
}

void display(int stack[5], int size)
{
    for (int i = size-1; i > -1; i--)
    {
        printf("\n%d", stack[i]);
    }
    printf("\n");
}
