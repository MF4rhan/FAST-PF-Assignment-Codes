#include <stdio.h>
void update(int grid[5][5]);
void query(int grid[5][5]);
void diagnostic(int grid[5][5]);
int main()
{
    int grid[5][5] = {
    {0, 3, 1, 5, 7},
    {2, 0, 6, 3, 1},
    {4, 5, 0, 2, 3},
    {7, 1, 4, 6, 0},
    {3, 2, 5, 1, 4} };
        int choice;
    do
    {
        printf("\n1. Update Sector Status.");
        printf("\n2. Query Sector Status.");
        printf("\n3. Run System Diagnostic.");
        printf("\n4. Exit the Program.");
        printf("\nEnter your choice.\n");
        scanf(" %d", &choice);
        switch (choice)
        {
        case 1:
            update(grid);
            break;
        case 2:
            query(grid);
            break;
        case 3:
            diagnostic(grid);
            break;
        case 4:
            //exit
            break;
        default:
            printf("\nInvalid option, Please try again.\n");
            break;
        }
    } while (choice!=4);
    
}

void update(int grid[5][5])
{
    int row, column, choice, status=0;
    printf("\nSpecify the coordinates of your sector of the 5x5 Grid in the exact format: (row,column) (ex: (2,3)).\n");
    scanf(" (%d,%d)",&row, &column);
    do
    {
        printf("\n1. Set a specific status.\n2. Clear a specific status.\nEnter your choice.\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: //set
                do
                {
                    printf("\n1. Power Status.\n2. OverLoad Warning.\n3. Maintainance Required.\nEnter your choice.\n");
                    scanf("%d", &status);
                    grid[row][column] |= (1 << (status-1));
                    printf("\nThe selected status on sector (%d, %d) has been Set.\n", row, column);
                } while (status<1 || status>3);
                break;
            case 2: //clear
                do
                {
                    printf("\n1. Power Status.\n2. OverLoad Warning.\n3. Maintainance Required.\nEnter your choice.\n");
                    scanf("%d", &status);
                    grid[row][column] &= ~(1 << (status-1));
                    printf("\nThe selected status on sector (%d, %d) has been Cleared.\n", row, column);
                } while (status<1 || status>3);
                break;
            default:
                printf("\nInvalid choice, try again.\n");
                break;
        }
    } while (choice!=1 && choice!=2);
printf("\n\n");
}

void query(int grid[5][5])
{
    int row, column;
    printf("\nSpecify the coordinates of your sector of the 5x5 Grid in the exact format: (row,column) (ex: (2,3)).\n");
    scanf(" (%d,%d)",&row, &column);
    if (grid[row][column] & (1 << 0))   printf("\nPower Status: ON");
    else    printf("\nPower Status: OFF");

    if (grid[row][column] & (1 << 1))   printf("\nOverload Warning: Overloaded");
    else    printf("\nOverLoad Warning: Normal");
    
    if (grid[row][column] & (1 << 2))   printf("\nMaintainance Required: Yes");
    else    printf("\nMaintainance Required: No");
    printf("\n\n");
}

void diagnostic(int grid[5][5])
{
    int overloaded=0, maintainance=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (grid[i][j] & (1 << 1))  overloaded++;
            if (grid[i][j] & (1 << 2))  maintainance++;
        }
    }
    printf("\nTotal number of Overloaded Sectors: %d", overloaded);
    printf("\nTotal number of Sectors that require maintainance: %d", maintainance);
    printf("\n\n");

}

