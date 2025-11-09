#include <stdio.h>
#define max 15
int main() {
    int arr[max],evensum=0,oddsum=0,n=0;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the array element %d:",i+1);
        scanf("%d",&arr[i]);
        if(i%2==0)
        {
            evensum+=arr[i];
        }
        else
        {
            oddsum+=arr[i];
        }
    }
   
    printf("The sum of numbers in even position is : %d",oddsum);
    printf("\nThe sum of numbers in odd position is : %d",evensum);
    return 0;
}