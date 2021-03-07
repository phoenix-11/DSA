void kadane()
{
   int a[]={-2,-3,4,-1,-2,1,5,-3};
   int n=8,i;
   int maxsum=-100;
   int cursum=0;
   for(i=0;i<n;i++)
   {
      cursum+=a[i];
      if(cursum>maxsum)
      {
         maxsum=cursum;
      }
      if(cursum<0)
      {
         cursum=0;
      }
   }
   printf("%d",maxsum);
}
