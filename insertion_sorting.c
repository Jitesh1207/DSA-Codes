#include <stdio.h>
void insertion_sorting(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
     }
}
void print_array(int arr[],int n)
{
    for(int i = 0; i<n; ++i)
    {
        printf("%d ",arr[i]);
        
    }
    printf("\n");
}
int main(){
    int arr[] = {1,14,13,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sorting(arr,n);
    print_array(arr,n);
    return 0;
}