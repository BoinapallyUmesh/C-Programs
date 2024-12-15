//QUEUE...........

/*#include<stdio.h>
#define max 5
int front=-1,rear=-1;
int queue[max];
int main()
{
    int data,choice=0,delete1;
    while(1)
    {
        printf("\n1.ENQ\n2.DEQ\n3.peek\n4.display\n5.exit\n");
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the data");
            scanf("%d",&data);
            enqueue(data);
            break;
        case 2:
            delete1=dequeue();
            printf("the dequeue element is %d",delete1);
            break;
        case 3:
            printf("the peek element is %d",peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("invalid case");

        }
    }
}
int dequeue()
{
    if(isempty())
    {
        printf("the Q is empty");
        exit(1);
    }
    int item=queue[front];
    front=front+1;
    return item;
}
int peek()
{
    if(isempty())
    {
        printf("the Q is empty");
    }
    return queue[front];
}
void display()
{
    if(isempty())
    {
        printf("the Q is empty");
    }
    for(int i=front;i<rear;i++)
    {
        printf("%d->",queue[i]);
    }
}
int isempty()
{
    if(front==-1||front==rear+1)
        return 1;
        else
        return 0;
}
void enqueue(int data)
{
    if(isfull())
    {
        printf("the Q is full");
    }
    if(front==-1)
    {
        front=0;
    }
        rear=rear+1;
        queue[rear]=data;
}
int isfull()
{
    if(rear==max-1)
        return 1;
    else
        return 0;
}*/


//queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*front=NULL,*rear=NULL;
int main()
{
    enq(10);
    enq(20);
    enq(30);
    display();
    deq();
    display();
    deq();
    display();
    deq();
    display();
    deq();
    display();
}
void enq(int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
    }
    else
        {
        rear->next=newnode;
        rear=newnode;
        }
};
void deq()
{
    struct node*temp;
    if(front==NULL)
    printf("Q is empty");
   else
   {
       temp=front;
       front=front->next;
   if(front==NULL)
    rear==NULL;
   free(temp);
   }

}
void display()
{
    struct node*temp=front;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}




































































































































































































































































































































































































































































































































