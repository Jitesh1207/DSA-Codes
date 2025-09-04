#include <stdio.h>
int binary(int* a,int low, int high, int num)
{
    int mid=(low+high)/2;
    if(high<low)
      return -1;
    if(a[mid]==num)
      return mid;
    else if(a[mid]<num)
      return binary(a,mid+1,high,num);
    else  
      return binary(a,low,mid-1,num);
}

int main()
{
    int num,x,low=0,high;
    int a[]={3,4,6,7,89,105,234,654,1001};
    int size=sizeof(a)/sizeof(int);
    printf("Enter the number you want to search\n");
    scanf("%d",&num);
    high=size-1;
    x = binary(a,low,high,num);
    if(x == 1)
      printf("%d does not exist\n",num);
    else
      printf("%d is Present at index %d",num,x);
}