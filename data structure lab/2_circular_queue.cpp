#include<stdio.h>
#define max 5
void cirqinsert(int *f,int *r,int ele,int ar[])
{
    if((*r+1)%max==*f)
    {
        printf("QUEUE IS FULL\n");
        return;
    }
    else if(*r==-1)
    {
        *f=0;
    }
    *r=(*r+1)%max;
    ar[*r]=ele;
}
void cirqdelete(int*f,int *r,int ar[])
{
    if(*f==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
    if(*f==*r)
    {
    printf("deleted element : %d",ar[*f]);
    *f=-1;
    *r=-1;
    }
    else
    {
       printf("deleted element : %d\n",ar[*f]);
       *f=(*f+1)%max;
    }
    }
}
void display(int f,int r,int ar[])
{
    if(f==-1)
    {
        printf("queue is empty\n");
    }
    else
    while(f!=r)
    {
        printf("%d ",ar[f]);
        f=(f+1)%max;
    }
    printf("%d",ar[r]);
    printf("\n");
}
int main()
{
    int f=-1,r=-1,ch,ele;
    int ar[max];
    do
    {
      printf("-------------MENUE--------------\n");
      printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
      printf("Enter your choice :");
      scanf("%d",&ch);
      switch (ch)
      {
      case 1 :printf("value to insert : ");
            scanf("%d",&ele);
            cirqinsert(&f,&r,ele,ar);
          break;
      case 2 :cirqdelete(&f,&r,ar);
          break;
      case 3 :display(f,r,ar);
           break;
      case 4 :printf("Exiting......\n");
           break;    
      default:
           printf("INVALID OPTION!!!\n");
          break;
      }
    } while (ch!=4);
 return 0;   
}
