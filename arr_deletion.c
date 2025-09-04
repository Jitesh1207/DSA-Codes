
#include <stdio.h>
int main(){
int arr[100],n,pos,i;
printf("Enter the number of elements in array: ");
scanf("%d",&n);

printf("Enter %d elements of array: ",n);
for(i=0; i<n; i++)
{
    scanf("%d",&arr[i]);
}

printf("Enter the position for delete(1 To %d): ",n);
scanf("%d",&pos);

if(pos<1 || pos>n){
    printf("Invalid position!");
}
else{
    for(i = pos - 1; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
}
printf("Array after deletion:\n");
for(i=0; i<n; i++)
{
    printf("%d ",arr[i]);
}
return 0;
}