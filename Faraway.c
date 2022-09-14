#include<stdio.h>
int main()
{
    int arr[200000],brr[200000],n, m, i=1,sum=0,t,j=0;
    printf("\nEnter the number of test cases = ");
    scanf("%d",&t);

    do
    {
        sum=0;
    printf("\nEnter the size of the array = ");
    scanf("%d",&n);

    printf("\nEnter the maximum limit of array elements = ");
    scanf("%d",&m);

    printf("\nEnter the array A elements!");
    for(i=1;i<=n;i++)
    {
        printf("\nElement at index arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    for(i=1;i<=n;i++)
    {
        printf("\nElement at index arr[%d] = ",i);
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        if(arr[i]<=(m/2))
        {
            brr[i]=m;

        }
        else
        {
            brr[i]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("\nElement at index brr[%d] = %d",i,brr[i]);
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        sum+=abs(arr[i]-brr[i]);
    }
    printf("\nMaximum Distance between array A and B is %d\n",sum);
    j++;
    }while(j<t);
    return 0;
}




