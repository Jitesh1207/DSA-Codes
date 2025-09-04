// Online C compiler to run C program online
#include <stdio.h>
void bubble(int a[], int size)
{    int z = 0,temp = 0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++)
        {
            if(a[j]>a[j+1]){
                 z = 1;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        if(z==0)
            break;
    }
    
}
int main() {
    int k;
    int a[]={2,45,3,9,5,34,21,11,13};
    int size = sizeof(a)/sizeof(int);
    printf("\nUnsorted\n");
    for(k=0; k<size; k++)
    {
        printf("%d   ",a[k]);
    }
    
    bubble(a,size);
    
    printf("\nSorted\n");
    for(k = 0; k<size; k++)
    {
        printf("%d   ",a[k]);
    }

    return 0;
}