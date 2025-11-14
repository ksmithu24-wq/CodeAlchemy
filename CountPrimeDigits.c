#include <stdio.h>
int main()
{
   int num=0,count=0,digit=0,temp=0;
   printf("Enter any number:");
   scanf("%d",&num);
   temp=num;
   while(temp!=0)
   {
       digit=temp%10;
       if( digit==2 || digit==3 || digit==5 || digit==7 )
       {
           count++;
       }
       temp/=10;
   }
   printf("Count of Prime Numbers in %d = %d",num,count);
   return 0;
}