#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1,max,stack[20];
void push();
void pop();
void traverse();

int main()
{
    int ch;
    printf("Enter the maximum size of stack:\n");
    scanf("%d",&max);
    while(1)
    {
        printf("(-) 1 for PUSH \n (-) 2 for POP \n (-) 3 for TRAVERSE \n (-) 4 for exit program\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:push();
               break;

        case 2:pop();
        break;

        case 3:traverse();
        break;

        case 4:exit(0);    
        
        default:printf("wrong choice");
            break;
        }
    }

    return 0;
}

void push()
{
    int item;
    if(top<max-1)
    {
        printf("Enter the item:\n");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;

    }
    else{
        printf("stack is overflow\n");
    }
}

void pop()
{
    int item;
    if(top>-1)
    {
        item=stack[top];
        printf("Deleted item =%d\n",item);
        top=top-1;

    }
    else{
        printf("stack is empty and underflow occure\n");
    }
}

void traverse()
{
    int i=0;
    if(top==-1)
    {
        printf("stack is empty\n");

    }
    else{
        printf("Item on stack\n");
        for(i=0;i<=top;i++)
        {
            printf("%d \t",stack[i]);
        }
        printf("\n");
    }
}