#include<stdio.h>
int min(int n,int b[]);
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

    printf("Smallest number = %d\n",min(size,a));
   return 0;
}
int min(int n,int b[])
{
    int min=b[0],i;
    for(i=0;i<10;i++)
    {
       if(b[i]<min)
        min=b[i];
    }
    return min;
}




