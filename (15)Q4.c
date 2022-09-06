#include<stdio.h>
#include<conio.h>
void left(int ,int ,int []);
void right(int ,int ,int []);
int main()
{
    int size,i,n;
    char d[6];
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the %d numbers.\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    fflush(stdin);
    printf("Enter the indicative(L/R) and no. of position for array rotation.\n");
    fgets(d,6,stdin);
    fflush(stdin);
    scanf("%d",&n);
    switch(d[0])
    {
        case  'l':left(n,size,a);
                 break;
        case  'r' :right(n,size,a);
                 break;
    }
    printf("Array after rotation :\n");
    for(i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
void left(int n,int size,int a[])
{
    int temp,i,j;
    for(i=1;i<=n;i++)
    {
        temp=a[0];
        for(j=0;j<size-1;j++)
        {
            a[j]=a[j+1];
        }
        a[j]=temp;
    }
}
void right(int n,int size,int a[])
{
    int temp,i,j;
    for(i=1;i<=n;i++)
    {
        temp=a[size-1];
        for(j=size-1;j>i-1;j--)
        {
            a[j]=a[j-1];
        }
        a[j]=temp;
    }
}
