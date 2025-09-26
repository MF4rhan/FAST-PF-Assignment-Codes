#include <stdio.h>
int main()
{
    int x,y;
    printf("Insert the point to check the Quadrant.\n");
    printf("Enter the value of x-component: ");
    scanf("%d", &x);
    printf("Enter the value of y-component: ");
    scanf("%d", &y);
    
    if (x>0 && y>0)
    {
        printf("The point (%d,%d) lies in the 1st Quadrant.",x,y); 
    }
    else if (x<0 && y>0)
    {
        printf("The point (%d,%d) lies in the 2nd Quadrant.",x,y); 
    }
    else if (x<0 && y<0)
    {
        printf("The point (%d,%d) lies in the 3rd Quadrant.",x,y);
    }
    else if (x>0 && y<0)
    {
        printf("The point (%d,%d) lies in the 4th Quadrant.",x,y);
    }
    else if (x==0 && y==0)
    {
        printf("The point lies in the Origin.");
    }
    else if (x>0 && y==0)
    {
        printf("The point (%d,%d) lies in the positive x-axis.",x,y); 
    }
    else if (x==0 && y>0)
    {
        printf("The point (%d,%d) lies in the positive y-axis.",x,y); 
    }
    else if (x<0 && y==0)
    {
        printf("The point (%d,%d) lies in the negative x-axis.",x,y);
    }
    else if (x==0 && y<0)
    {
        printf("The point (%d,%d) lies in the negative y-axis.",x,y);
    }
    
return 0;
}