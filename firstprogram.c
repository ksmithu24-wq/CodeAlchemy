#include <stdio.h>

int main() {
    int a,b,i=0,pdt=0;
    printf("Enter any two numbers to give its product:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        pdt+=(a&a);
    }
    printf("The product of %d and %d = %d",a,b,pdt);
    return 0;
}