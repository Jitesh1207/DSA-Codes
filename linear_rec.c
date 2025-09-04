#include <stdio.h>
int linear(int a[], int size, int num, int i)
{
    if(i==size)
    {
        return -1;
    }
    if(a[i]==num)
    {
        return i;
    }
    i++;
    return linear(a, size, num, i);
}

int main()
{
    int num,size,x,i;
    int a[] = {33,3234,66,54,2,4,0,7,2324,65,89,73,21};
    printf("Enter the number which you want to check: ");
    scanf("%d",&num);
    size = sizeof(a)/sizeof(int);
    x = linear(a, size, num, i);
    if(x==-1)
    {
        printf("%d is not found", num);
    }
    else{
        printf("%d is at index number %d", num, x);
    }

    return 0;

    
}