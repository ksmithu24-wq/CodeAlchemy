#include <stdio.h>
int main()
{
    int x=0,y=0;
    printf("Enter the Coordinates:");
    printf("\nX = ");
    scanf("%d",&x);
    printf("Y = ");
    scanf("%d",&y);
    if(x>0 && y>0)
    {
        printf("\nX and Y lies in Quadrant 1");
    }
    else if(x<0 && y>0)
    {
        printf("\nX and Y lies in Quadrant 2");
    }
    else if(x<0 && y<0)
    {
        printf("\nX and Y lies in Quadrant 3");
    }
    else if(x>0 && y<0)
    {
        printf("\nX and Y lies in Quadrant 4");
    }
    else if(x==0 || y==0)
    {
        printf("\nPoint is on axis");
    }
    return 0;
}