#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *link;
};
struct node *top=NULL;

void push()
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("Enter node data\n");
   scanf("%d",&temp->data);
   temp->link=top;
   top=temp;
}

void pop()
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   if(top==NULL)
   {
      printf("No elements\n");
   }
   else
   {
      temp=top;
      printf("Element %d ",temp->data);
      top=temp->link;
      temp->link=NULL;
      free(temp);
   }
}

void traverse()
{
   struct node *temp;
   if(top==NULL)
   {
      printf("Stack is Empty\n");
   }
   else
   {
      temp=top;
      while(temp!=NULL)
      {
         printf("%d\n",temp->data);
         temp=temp->link;
      }
   }
}

int main()
{
   push();
   pop();
   traverse();
}
