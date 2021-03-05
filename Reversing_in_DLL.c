void reverse()
{
   struct node *temp,*p;
   temp=(struct node*)malloc(sizeof(struct node));
   p=temp->right;
   temp=root;
   p=temp->right;
   temp->right=NULL;
   temp->left=p;
   while(p!=NULL)
   {
      p->left=p->right;
      p->right=temp;
      temp=p;
      p=p->left;
   }
   root=temp;
}
