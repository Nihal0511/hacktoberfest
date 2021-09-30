#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

void push(struct stack *ptr, int data)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow !  %d can't be pushed",data);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=data;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow !");
        return -1;
    }
    else 
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr, int i)
{
    int arrInd=ptr->arr[ptr->top-i+1];
    if(arrInd<0)
    {
        printf("Not a valid position");
        return -1;
    }
    else 
    {
        return arrInd;
    }
}

int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int stackBottom(struct stack *ptr)
{
    return ptr->arr[0];
}


int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=6;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));

    push(sp,10);
    push(sp,14);
    push(sp,17);
    push(sp,25);
    push(sp,96);
    push(sp,45);

    for(int j=1;j<=sp->top+1;j++)
    {
        printf("\nThe value at position %d is %d",j,peek(sp,j));
    }
    printf("\nStack Top :%d",stackTop(sp));
    printf("\nStack Bottom :%d",stackBottom(sp));


    return 0;
}
