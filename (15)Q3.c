#include<stdio.h>
int sort(int ,int[]);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    sort(size,a);
    return 0;
}
int sort(int n,int b[])
{
    int i,j,temp;
    printf("Enter the numbers.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-1;j++)
       {
         if(b[j]>b[j+1])
         {
             temp=b[j+1];
             b[j+1]=b[j];
             b[j]=temp;
         }
       }
    }
    printf("Sorted array : ");
    for(i=0;i<n;i++)
    {
       printf("%d ",b[i]);
    }
    return 1;
}






