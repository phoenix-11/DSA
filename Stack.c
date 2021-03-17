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

int pop()
{
   int ele;
   if(isempty())
   {
      return(0);
   }
   else
   {
      ele=stack[top];
      top--;
   }
   return(top);
}

int peek()
{
   if(isEmpty())
   {
      return(0);
   }
   else
   {
      return(stack[top]);
      top--;
   }
}

void push(int ele)
{
   if(isfull())
   {
      printf("Stack is full\n");
   }
   else
   {
      top++;
      stack[top]=ele;
      printf("%d inserted \n",ele);
   }
}

int main()
{
   push(23);
}
