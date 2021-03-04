#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *right;
   struct node *left;
};
struct node *root=NULL;

void createDLL()
{
   int i=1;
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   while(i==1)
   {
      if(root==NULL)
      {
         root=temp;
         struct node *p;
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
         struct node *p;
         p=(struct node*)malloc(sizeof(struct node));
         p->right=NULL;
         printf("Enter node data\n");
         scanf("%d",&p->data);
         p->left=temp;
         temp->right=p;
         temp=p;
      }
      i--;
      printf("want to continue 1 or 0\n");
      scanf("%d",&i);
   }
}

void insertatbeg()
{
   struct node *p;
   p=(struct node*)malloc(sizeof(struct node));
   printf("Enter node data for beg\n");
   scanf("%d",&p->data);
   p->left=NULL;
   p->right=root;
   root->left=p;
   root=p;
}

void insertatpos(int pos)
{
   int i=0;
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   temp=root;
   while(temp!=NULL)
   {
      i++;
      if(i==pos)
      {
         struct node *p;
         p=(struct node*)malloc(sizeof(struct node));
         p->right=NULL;
         p->left=NULL;
         printf("Enter node data for pos\n");
         scanf("%d",&p->data);
         p->left=temp;
         p->right=temp->right;
         if(temp->right=NULL)
         {
            temp->right->left=p;
         }
         temp->right=p;
      }
      temp=temp->right;
   }
}

void insertatend()
{
   struct node *temp,*p;
   temp=(struct node*)malloc(sizeof(struct node));
   p=(struct node*)malloc(sizeof(struct node));
   temp=root;
   while(temp->right!=NULL)
   {
      temp=temp->right;
   }
   printf("Enter node data for end\n");
   scanf("%d",&p->data);
   p->right=NULL;
   temp->right=p;
   p->left=temp;
   temp=p;
}

void display()
{
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   temp=root;
   if(temp!=NULL)
   {
      while(temp!=NULL)
      {
         printf("%d  ",temp->data);
         temp=temp->right;
      }
   }
   else
   {
      printf("List is empty\n");
   }
}

int main()
{
   createDLL();
   insertatbeg();
   insertatpos(2);
   insertatend();
   display();
}
