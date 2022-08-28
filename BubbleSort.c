//bubble sort
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int ar[n];
    // int ar[n]={8,4,1,9,7,3,5,2,0,6};
    int i,j,flag=0;
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    printf("[%d] ",ar[i]);
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(ar[j]<ar[j-i])
            {
                int temp;
                temp=ar[j];
                ar[j]=ar[j-1];
                ar[j-1]=temp;
            }
            else
            flag=1;
            
        }
        if(flag==1)
        break;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("[%d] ",ar[i]);
    }
}