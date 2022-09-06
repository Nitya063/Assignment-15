#include<stdio.h>
void mergearray(int ,int [],int [],int []);
int main()
{
    int size,i;
    printf("Enter the size of the arrays.\n");
    scanf("%d",&size);
    int a[size],b[size],c[(size*2)];
    printf("Enter the first array.\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Enter the second array.\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    mergearray(size,a,b,c);
    printf("Merged array:\n");
    for(i=0;i<(size*2);i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}
void mergearray(int size,int a[],int b[],int c[])
{
    int i=0,j=0,k;
    for(k=0;k<(size*2);k++)
    {
     if(i<size && j<size)
      {
       if(a[i]>b[j])
       {
           c[k]=a[i];
           i++;
       }
       else
       {
           c[k]=b[j];
           j++;
       }
      }
      else
      {
          break;
      }

    }
    if(i==size)
    {
        while(j<size)
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
   else
    {
        while(i<size)
        {
            c[k]=a[i];
            k++;
            i++;
        }
    }

}


