#include<stdio.h>
int binary(int* a, int i, int num)
{
    int low=0,mid,high=i-1;
    while(low<=high)
    {
        mid=(low+high)/2;
            if(a[mid]==num)
            {
                return mid;
            }
            else if(a[mid]<num)
                low = mid+1;
            else
                high=mid-1;
    }

    return -1;
}

int main()
{
    int num,x;
    int a[]={3,4,6,7,89,99,105,234,654,1001};
    int size = sizeof(a)/sizeof(int);
    printf("Enter the number you want to search\n");
    scanf("%d",&num);

    x=binary(a,size,num);

    if(x==-1)
    printf("%d Not exist",num);
    else
    printf("%d is Present at index %d",num,x);

}