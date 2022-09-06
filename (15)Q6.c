#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the numbers.\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array in reverse oredr :\n");
    for(i=size-1;i>=0;i--)
    {
        printf(" %d \n",a[i]);
    }
    return 0;
}
