#include<stdio.h>
int linear(int* a,int size,int num)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]==num)
        return i;
    }
    return -1;
    
}
int main()
{
    int num,x,size,a[]={2,5,3,7,1,90,76,43,21,12};
    size= sizeof(a)/sizeof(int);
    printf("Enter the number which you want to search\n");
    scanf("%d",&num);
    x=linear(a,size,num);
    if(x==-1)
    printf("%d Not exist",num);
    else
    printf("%d is present at index %d",num,x);
}