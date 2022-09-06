#include<stdio.h>
void frequency(int ,int [],int []);
int main()
{
    int size,i,max;
    int b[30]={0};
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the numbers.\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    frequency(size,a,b);
    printf("Duplicate elements:\n");
    for(i=0;i<30;i++)
    {
        if(b[i]==2)
            printf("%d\n",i);
    }
    return 0;
}
void frequency(int size,int a[],int b[])
{
    int i;
    for(i=0;i<size;i++)
    {
        b[a[i]]++;
    }
}


