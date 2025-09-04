#include<stdio.h>
void merge(int arr[], int start, int m, int end)
{
    int i,j,k;
    int n1 = m-start+1;
    int n2 = end-m;
    int L[n1],R[n2];
    
    for(i=0; i<n1; i++)
    {
        L[i] = arr[start + i];
    }
    for(j=0; j<n2; j++)
    {
        R[j] = arr[m+1+j];
    }

    i = j = 0;
    k = start;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else{
            arr[k++] = R[j++];
        }
    }
    while(i < n1)
    {
        arr[k++] = L[i++];
    }
    while(j < n2)
    {
        arr[k++] = R[j++];
    }
}
void merge_sort(int arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }
    else{
        int m = (start+end)/2;
        merge_sort(arr, start, m);
        merge_sort(arr, m+1, end);
        merge(arr, start, m, end);
    }
}
int main()
{
    int i,arr[] = {38, 27, 43, 3, 9, 82, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr, 0, n-1);
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}