#include<stdio.h>
int max(int n,int b[]);
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

    printf("Greatest number = %d\n",max(size,a));
   return 0;
}
int max(int n,int b[])
{
   int max=b[0],i;
    for(i=0;i<n;i++)
    {
       if(b[i]>max)
        max=b[i];
    }
    return max;
}



