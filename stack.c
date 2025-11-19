#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define max 5

int stack[100], i, n;
int top = -1, val, temp, count = 0;

void push();
void pop();
void display();

int main()
{
    int option = 1;
    while(option == 1)
    {
        printf("\n=======================\n");
        printf("\n Operations on a stack\n");
        printf("\n=======================\n");
        printf("\n 1: Push");
        printf("\n 2: Pop");
        printf("\n 3: Display");
        printf("\n 4: Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default: printf("INVALID CHOICE");
        }
        printf("\nDo you wish to continue [Type 0 or 1]: ");
        scanf("%d", &option);
    }
    printf("\n");
}

void push()
{
    if(top == (max - 1))
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("\nEnter the element to be pushed into the stack: ");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
        count++;
        printf("\nNo. of elements in the stack = %d", count);
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        temp = stack[top];
        top = top - 1;
        printf("\nThe deleted element is %d", temp);
    }
}

void display()
{
    if(top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("\nThe elements of the stack are:\n");
        for(i = 0; i <= top; i++)
        {
            printf("%d\t", stack[i]);
        }
    }
}
