//Single linked List

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* nxt;
    struct node *prev;
};

//Insertfirst

struct node* insertfirst(struct node *head,int data)

{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->nxt=head;
    return ptr;
}

//Insertafter

struct node* insertafter(struct node *head,struct node* prevnode,int data)

{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->nxt=prevnode->nxt;
    prevnode->nxt=ptr;
    return head;
}

//Insertend

 struct node* insertend(struct node*head,int data)
    {
        struct node *ptr=(struct node*)malloc(sizeof(struct node));

        ptr->data=data;
        ptr->nxt=NULL;
        struct node*p=head;
        while(p->nxt!=NULL)
        {
            p=p->nxt;
        }

        p->nxt=ptr;
        return head;
    }

//Insertindex

   struct node*insertindex(struct node*head,int data,int index)
   {
       struct node * ptr=(struct node*)malloc(sizeof(struct node));
       struct node *p=head,*p1;
       for(int i=0;i!=index-1;i++)
       {
           p=p->nxt;

       }
          p1=p->nxt;
          ptr->data=data;
          ptr->nxt=p->nxt;
          ptr->prev=p;
          p->nxt=ptr;
          p1->prev=ptr;
          return head;
   }

int main()
{
    struct node *head,*first,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->nxt=first;

    first->data=20;
    first->nxt=second;

    second->data=30;
    second->nxt=third;

    third->data=40;
    third->nxt=NULL;

    Traversal(head);
    head=insertfirst(head,5);

    Traversal(head);
    head=insertafter(head,second,35);

    Traversal(head);
    head=insertend(head,99);

    forTraversal(head);
    head=insertindex(head,1,70);
    revTraversal(head);

}
void Traversal(struct node*head)
{
    int c=0;
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->nxt;
        c++;
    }
    printf("Number of nodes are %d ",c);
    printf("\n");
}*/



//CIRCULAR Linked List;

/*#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * nxt;
};

int main()
{
  struct node*head,*first,*second,*third;
head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->nxt=first;

first->data=20;
first->nxt=second;

second->data=30;
second->nxt=third;

third->data=40;
third->nxt=head;
Traversal(head);



}
void Traversal(struct node *head)
{
    for(int i=0;i<=5;i++)
    {
    struct node*temp=head;
    int c=0;
    do{
        printf("%d ",head->data);
        head=head->nxt;
        c++;
    }while(temp!=head);
    printf("no of nodes are %d",c);
    printf("\n");
}
}*/


//Using Characters

/*#include<stdio.h>
#include<stdlib.h>



struct node
{
    char data;
    struct node * nxt;
};

int main()
{
  struct node*head,*first,*second,*third;
head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));

head->data='A';
head->nxt=first;

first->data='B';
first->nxt=second;

second->data='C';
second->nxt=third;

third->data='D';
third->nxt=fourth;

fourth>data='e';
fourth->nxt=head;

Traversal(head);


}
void Traversal(struct node *head)
{
    for(int i=0;i<=5;i++)
    {
    struct node*temp=head;
    char c=0;
    do{
        printf("%d ",head->data);
        head=head->nxt;
        c++;
    }while(temp!=head);
    printf("no of nodes are %c",c);
    printf("\n");
}
}*/


//Double linked list

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*insert1(struct node *head,int data)
{
 struct node * ptr=(struct node*)malloc(sizeof(struct node));
 ptr->data=data;
 ptr->next=head;
 ptr->prev=NULL;
 head->prev=ptr;
 return ptr;

}

struct node*insertend(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    //p=third;
    while(p->next!=NULL)
        p=p->next;
    ptr->data=data;
    ptr->next=NULL;
    ptr->prev=p;
    p->next=ptr;
    return head;

}

//Insert index;

struct node*insertindex(struct node*head,int index,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head,*p1;
    {
        for(int i=0;i!=index-1;i++)
        {
            p=p->next;
        }
       p1=p->next;
       ptr->data=data;
       ptr->next=p->next;
       ptr->prev=p;
       p->next=ptr;
       p1->prev=ptr;
       return head;
     }
}

//insert afternode

struct node*insertafternode(struct node*head,struct node *prevnode,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p1;
    ptr->data=data;
    p1=prevnode->next;
    ptr->next=prevnode->next;
    ptr->prev=prevnode;
    prevnode->next=ptr;
    p1->prev=ptr;
    return head;

}

int main()

{
    struct node*head,*first,*second,*third;

    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));



head->prev=NULL;
head->data=10;
head->next=first;

first->prev=head;
first->data=20;
first->next=second;

second->prev=first;
second->data=30;
second->next=third;

third->prev=second;
third->data=40;
third->next=NULL;



forTraversal(head);
revTraversal(head);
revTraversal1(third);


head=insert1(head,33);
forTraversal(head);
revTraversal(head);


head=insertend(head,99);
forTraversal(head);
revTraversal(head);

head=insertindex(head,1,75);
forTraversal(head);
revTraversal(head);

head=insertafternode(head,second,102);
forTraversal(head);
revTraversal(head);

}

void revTraversal(struct node *head)
{
    struct node*p=head;
    int c=0;
    while(p->next!=NULL)
        p=p->next;

    while(p!=NULL)
    {
        printf("%d-> ",p->data);
        p=p->prev;
        c++;
    }
     printf("number of nodes are %d",c);
     printf("\n ");

}

void revTraversal1(struct node * third)
{
    while(third!=NULL)
    {
        int c=0;
        printf("%d-> ",third->data);
        third=third->prev;
        c++;
    }

    printf("\n ");
}

  void forTraversal(struct node*head)
   {
       int c=0;
       while(head!=NULL)
       {
        printf("%d-> ",head->data);
           head=head->next;
           c++;
       }
       printf("number of nodes are %d",c);
       printf("\n");
   }*/


////Circular list using double linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node*prev;
struct node*next;
}
*head,*first,*second,*third;

//TRAVERSAL
void traversal(struct node*head){
struct node*p=head;
do{
    printf("Index data is %d\n",head->data);
    head=head->next;

}while(p!=head);
}

//TRAVERSAL FROM BACKSIDE

void traversall(struct node*head){
struct node*p=head;
struct node*p1=head;
do{
    p=p->next;
}while(p!=p1->prev);
do{
    printf("The data is:%d\n",p->data);
     p=p->prev;
}while(p!=p1->prev);
}

//Case 2 AFTER NODE
struct node*afternode(struct node*head,struct node*previous,int data){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=previous->next;
previous->next->prev=ptr;
previous->next=ptr;
ptr->prev=previous;
return head;
}

//index

struct node*ind(struct node*head,int index,int data){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
struct node*p=head;
struct node*p1=p->next;
for(int i=0;i<index-1;i++){
    p=p->next;}
ptr->data=data;
ptr->next=p->next;
ptr->prev=p;

p->next=ptr;

return head;
}
int main(){
head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));

head->data=1;
head->prev=third;
head->next=first;

first->data=2;
first->prev=head;
first->next=second;

second->data=3;
second->prev=first;
second->next=third;

third->data=4;
third->prev=second;
third->next=head;

printf("The Base data of the nodes\n");
traversal(head);

printf("The base values from the backward direction\n");
traversall(head);



printf("For the case after node\n");
head=afternode(head,second,79);
traversal(head);
printf("--------------------\n");
traversall(head);



printf("For the case index\n");
head=ind(head,2,990);
traversal(head);
printf("--------------------\n");
traversall(head);
}*/

//Circular list using double linked list;

/*#include<stdlib.h>
#include<stdlib.h>

struct node{
int data;
struct node*prev;
struct node*next;
}*head,*first,*second,*third;

//TRAVERSAL
void traversal(struct node*head){
struct node*p=head;
do{
    printf("Index data is %d\n",p->data);
    p=p->next;

}while(p!=head);
}

//TRAVERSAL FROM BACKSIDE

void traversall(struct node*head){
struct node*p=head;
struct node*p1=head;
do{
    p=p->next;
}while(p!=p1->prev);
do{
    printf("The data is:%d\n",p->data);
     p=p->prev;
}while(p!=p1->prev);
}

//Case 2 AFTER NODE
struct node*afternode(struct node*head,struct node*previous,int data){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=previous->next;
previous->next->prev=ptr;
previous->next=ptr;
ptr->prev=previous;
return head;
}


struct node *ind(struct node *head, int index, int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    for (int i = 0; i < index - 1; i++) {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    ptr->prev = p;
    p->next->prev = ptr;
    p->next = ptr;

    return head;
}

int main(){
head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));

head->data=1;
head->prev=third;
head->next=first;

first->data=2;
first->prev=head;
first->next=second;

second->data=3;
second->prev=first;
second->next=third;

third->data=4;
third->prev=second;
third->next=head;

printf("The Base data of the nodes\n");
traversal(head);

printf("The ba
       se values from the backward direction\n");
traversall(head);

printf("For the case after node\n");
head=afternode(head,second,79);
traversal(head);
printf("--------------------\n");
traversall(head);

printf("For the case index\n");
head=ind(head,2,990);
traversal(head);
printf("--------------------\n");
traversall(head);
}*/

//Circular Linked list Using Double Linked List;;

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
};
int main()
{
    struct node *head,*first,*second;
    head=(struct node*)malloc (sizeof(struct node));
    first=(struct node*)malloc (sizeof(struct node));
    second=(struct node*)malloc (sizeof(struct node));


head->data=10;
head->prev=second;
head->next=first;

first->data=20;
first->prev=head;
first->next=second;

second->data=30;
second->prev=first;
second->next=head;

fortraversal(head);
revtraversal(second);

}

void fortraversal(struct node*head)
{
    struct node*p=head;
    for(int i=0;i<3;i++)
    {
        printf("%d->",p->data);
        p=p->next;

    }
}
    void revtraversal(struct node*second)
    {
        for(int i=0;i<3;i++)
        {
            printf("%d->",second->data);
            second=second->prev;

        }
               return 0;

    }*/

