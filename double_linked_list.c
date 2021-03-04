#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *left;
   struct node *right;
};
struct node *root=NULL;

void createlinkedlist()
{
   int y=1;
   struct node *temp,*p;
   temp=(struct node*)malloc(sizeof(struct node));
   temp=root;
   while(y==1)
   {
      if(root==NULL)
      {
         p=(struct node*)malloc(sizeof(struct node));
         p->right=NULL;
         p->left=NULL;
         printf("Enter node data\n");
         scanf("%d",&p->data);
         p->left=temp;
         root=p;
         temp=root;
      }
      else
      {
         p=(struct node*)malloc(sizeof(struct node));
         printf("Enter node data\n");
         scanf("%d",&p->data);
         p->right=NULL;
         temp->right=p;
         p->left=temp;
         temp=p;
      }
      y--;
      printf("want to continue yes or no\n");
      scanf("%d",&y);
   }
}

void displaylinkedlist()
{
   struct node *k;
   k=(struct node*)malloc(sizeof(struct node));
   k=root;
   while(k!=NULL)
   {
      printf("%d\n",k->data);
      k=k->right;
   }
}

int main()
{
   createlinkedlist();
   displaylinkedlist();
}
