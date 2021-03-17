#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int top=-1;
int stack[CAPACITY];

int isfull()
{
   if(top==CAPACITY-1)
   {
      return(1);
   }
   else
   {
      return(0);
   }
}

int isEmpty()
{
   if(top==-1)
   {
      return(1);
   }
   else
   {
      return(0);
   }
}

void push()
{
   int i=1;
   if(isfull())
   {
      printf("Stack is full\n");
   }
   else
   {
      while(top<CAPACITY)
      {
         top++;
         printf("Enter the data insertion");
         scanf("%d",&stack[top]);
      }
   }
}

void traverse()
{
   int i;
   if(isEmpty())
   {
      printf("Stack is empty\n");
   }
   else
   {
      printf("Stack elements are : ");
      for(i=0;i<=top;i++)
      {
         printf("%d %d\n",i,stack[i]);
      }
   }
}

int main()
{
   push();
   traverse();
}
