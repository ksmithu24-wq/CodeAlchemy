#include <stdio.h>
int main()
{
  int n=0,count=0;
  printf("Enter any Number:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
      if(i%2==0)
      {
          count++;
      }
  }
  printf("The Total Number of Even Number between 1 to %d = %d",n,count);
  return 0;
}
