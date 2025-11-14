#include <stdio.h>
int main()
{
    int age=0,price=0;
    float redprc=0;
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter price:");
    scanf("%d",&price);
    if(age<20)
    {
        redprc=price-(price*(5/100.00));
    }
    else if(age>=20 && age<=50)
    {
        redprc=price-(price*(10/100.00));
    }
    else if(age>50)
    {
        redprc=price-(price*(25/100.00));
    }
    printf("Reduced Price = %f",redprc);
    return 0;
}