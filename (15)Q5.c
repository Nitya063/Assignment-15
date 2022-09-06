#include<stdio.h>
int occur(int ,int[]);
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

    printf("\n%d",occur(size,a));
    return 0;
}
int occur(int size,int a[])
{
    int i;
    for(i=0;i<size-1;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
    return 0;
}
