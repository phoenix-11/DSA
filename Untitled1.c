#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *link;
};
struct node *start;

void createlinkedlist()
{
   int n=1,k;
   struct node *temp,*p;
   temp=(start);
   while(n==1)
   {
      keyword:
      if(start==NULL)
      {
         p=(struct node *)malloc(sizeof(struct node));
         printf("Enter data of the node\n");
         scanf("%d",&p->data);
         p->link=NULL;
         start=p;
         temp=start;
      }
      else
      {
         p=(struct node *)malloc(sizeof(struct node));
         printf("Enter other insertion\n");
         scanf("%d",&p->data);
         p->link=NULL;
         temp->link=p;
         temp=p;
      }
      n--;
      printf("Want to add more yes or no\n");
      scanf("%d",&n);
   }
}

void displaylinkedlist()
{
   struct node *temp;
   temp=start;
   if(temp!=NULL)
   {
      printf("\nThe content in the list are\n");
      while(temp!=NULL)
      {
         printf("%d",temp->data);
         temp=temp->link;
      }
   }
   else
   {
      printf("Linked list is empty\n");
   }
}

int main()
{
   createlinkedlist();
   displaylinkedlist();
   return(0);
}
