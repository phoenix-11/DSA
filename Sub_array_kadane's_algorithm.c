#include<stdio.h>
int main()
{
   int arr[]={1,2,3,4,5,6,7,8,9,20};
   int i,j,k;
   for(i=0;i<10;i++)
   {
      for(j=i;j<=10;j++)
      {
         for(k=i;k<j;k++)
         {
            printf("%d  ",arr[k]);
         }
         printf("\n");
      }
   }
   kadane();
}
