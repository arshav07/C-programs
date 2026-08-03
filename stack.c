#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int item)
{
    if(top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = item;
    }
}

void pop()
{
    if(top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if(top == -1)
        printf("Stack is Empty\n");
    else
    {
        printf("Stack elements are:\n");
        for(i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}
