#include <stdio.h>
int main()
{
    int a=0,b=0,c=0;
    printf("Enter the sides of triangle:");
    printf("\nA = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        if(a==b && b==c && a==c)
        {
            printf("\nEquilateral Triangle");
        }
        else if (a==b || b==c  ||  a==c)
        {
            printf("\nIsosceles Triangle");
        }
        else 
        {
            printf("\nScalene Triangle");
        }
    }
    else 
    {
        printf("\nNot a Triangle");
    }
    return 0;
}