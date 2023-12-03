#include <stdio.h>
#define MAX 50

int stack[MAX], top = -1;

void push(int item)
{
    if(top == MAX-1)
        printf("\nStack Overflow");
    else
    {
        top++;
        stack[top] = item;
    }
}

int pop()
{
    int item;

    if(top == -1)
    {
        printf("\nStack Underflow");
        return -1;
    }
    else
    {
        item = stack[top];
        top--;
        return item;
    }
}

void display()
{
    int i;

    if(top == -1)
        printf("\nStack is empty");
    else
    {
        printf("\nStack elements are:\n");
        for(i=top; i>=0; i--)
            printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice, item;

    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter item to be pushed: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                item = pop();
                if(item != -1)
                    printf("\nItem popped is: %d", item);
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("\nInvalid choice");
        }
    }
}

