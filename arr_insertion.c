#include<stdio.h>
int main()
{
    int arr[100];
    int n,num,position,i;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    printf("Enter the %d element in array: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",arr[i]);
    }

    printf("Enter the number that you want insertion: ");
    scanf("%d",&num);

    printf("Enter the position of this value(1 to %d): ",n+1);
    scanf("%d",&position);

    if(position<1 || position>n+1)
    {
        printf("This Position is invailid!\nPlese insert valid Position");
    }
    else
    {
        for(int j=n; j>=position; j--)
        {
            arr[j]=arr[j-1];
        }
        arr[position -1] = num;
        n++;

        printf("Array after insertion: ");
        for(int k=0; k<n; k++)
        {
            scanf("%d ",&arr[k]);
        }

    }
    return 0;

}