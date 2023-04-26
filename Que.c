#include<stdio.h>
#include<stdlib.h>
#define max 5
int Que[max];
int rear=-1,front=-1;
void insert()
{
    if(rear==max-1)
    {
        printf("Overflow\n");
    }
    else
    {
        int item;

        printf("Enter element into the array\t");
        scanf("%d",&item);
        rear=rear+1;
        Que[rear]=item;
        if(front==-1)
        {
        front=0;
        }

    }
}
void delete1()
{
    if(front==-1||front>rear)
    {
    printf("Underflow\n");

    }
    else
    {
        int x;

        x=Que[front];
        front=front+1;
        printf("%d\n",x);
    }
}
void display()
{
    if(front==-1||front>rear)
    {
    printf("No any element present into the queue\n");
    }
    else
    {
    for(int i=front;i<=rear;i++)
    {

    printf("%d\n",Que[i]);
    }
    }
}
void peek()
{
    if(front==-1)
    {
    printf("No element\n");
    }
    else
    {
        int y;
        y=Que[front];
        printf("%d\n",y);
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("*************Enter choice***********\n");

        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete1();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
        default:
            printf("you entered wrong choice\n");
        }

    }
    return 0;
}
