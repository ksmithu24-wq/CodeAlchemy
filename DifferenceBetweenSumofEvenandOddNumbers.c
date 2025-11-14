#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n=0,evensum=0,oddsum=0,diff=0;
   printf("Enter any number:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       if(i%2==0)
       {
           evensum+=i;
       }
       else
       {
           oddsum+=i;
       }
   }
   diff=abs(evensum-oddsum);
   printf("The sum of Odd numbers = %d",oddsum);
   printf("\nThe sum of Even numbers = %d",evensum);
   printf("\nThe difference between sum of Odd and Even numbers = %d",diff);
   return 0;
}