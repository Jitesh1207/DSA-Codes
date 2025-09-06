// Online C compiler to run C program online
#include <stdio.h>
#define size 7
int arr[size];
int top = -1;

int isfull()
{
    if(top==(size-1))
        return 1;
    else
        return 0;
}
int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

void push(int x)
{
    if(isfull())
        printf("*************Overflow**************\n");
    else{
        top++;
        arr[top]=x;
    }
        
}
void pop()
{
    if(isempty())
        printf("**************Underflow**************\n");
    else{
        int x = arr[top];
        top--;
        printf("*****************%d is deleted\n",x);
    }
    
}
void peek()
{
    if(isempty())
        printf("*********Stack is empty********\n");
    else
        printf("**********%d is last element*********\n",arr[top]);
}

int main() {
    int x,y;
    while(1)
    {
        printf("Enter your choice\n1. For push\n2. For peek\n3 For Peek\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1: printf("Enter the number which you want to push\n");
                    scanf("%d",&y);
                    push(y);
                    break;
            case 2: pop();
                    break;
            case 3: peek();
            
        }
    }
   

    return 0;
}