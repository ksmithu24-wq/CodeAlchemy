#include <stdio.h>
#define max 100
int main() {
    int arr[max],n=0,count=0;
    int i=0,j=0,k=0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    if(n>max)
    {
        printf("Array size is beyond the limit");
    }
    else
    {
         printf("Enter the array elements:");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            count=0;
            for(j=i+1;j<n; )
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    for (k=j; k<(n-1); k++)
                    {
                        arr[k] = arr[k + 1];
                    }
                    n--;
                }      
                else 
                {
                    j++;
                }
            }
            if(count>0)
            {
                printf("\nThe occurence of %d is %d",arr[i],count+1);
            }
        }
    }
    return 0;
}
    