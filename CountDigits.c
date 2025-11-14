#include <stdio.h>
int main()
{
    int num=0,count=0,temp=0;
    printf("Enter any Number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        count++;
        temp/=10;
    }
    printf("Total Number of Digits in %d is %d",num,count);
    return 0;
}