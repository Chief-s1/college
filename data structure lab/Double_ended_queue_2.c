#include<stdio.h>
#define max 5
void enqueue(int ar[],int *f,int *r)
{
if(*r==max-1)
   printf("QUEUE is Full\n");
else
   {
    if(*f==-1)
       {
        *f=*f+1;
       }
    *r=*r+1;
    scanf("%d",&ar[*r]);
   }
}

void dequeue(int ar[],int *f,int *r)
{
if(*f==-1||*r==-1)
   printf("queue is empty\n");
else
 {
   printf("Element deleted is :%d\n",ar[*f]);
   *f+=1;
 }
}

void dequeuerear(int ar[],int *f,int *r)
{
if(*r==-1)
   printf("queue is empty ");
else
 {
   printf("deleted element is :%d",ar[*r]);
   *r-=1;
 }
}
void display(int ar[],int f,int r)
{
for(int i=f;i<=r;i++)
{
printf("%d\n",ar[i]);
}
}
int main()
{
int ch1,ch2,front=-1,rear=-1;
int ar[max];
do
{
printf("-------MENUE---------\n");
printf("1.Input restricted DQUEUE\n");
printf("2.Output restricted DQUEUE\n");
printf("3.Exit\n");
printf("Enter your choice :");
scanf("%d",&ch1);
switch(ch1)
{
	case 1:
               do
               {
               printf("------OPREATIONS------\n");
	       printf("1.Enqueue\n");\
	       printf("2.Dequeue from front\n");
	       printf("3.Dequeue from rear\n");
               printf("4.Display\n");
	       printf("5.Exit\n");
               scanf("%d",&ch2);
               switch(ch2)
               {
                 case 1:enqueue(ar,&front,&rear);
                        break;
                 case 2:dequeue(ar,&front,&rear);
                        break;
                 case 3:dequeuerear(ar,&front,&rear);
                        break;
                 case 4:display(ar,front,rear
);
                        break;
		 case 5:
                        break;
                 default :printf("Invalid option!!!");
                        break;
               }
               }while(ch2!=5);
	break;
        case 2:
               /*do
               {
               printf("------OPREATIONS------\n");
	       printf("1.Enqueue from front\n");\
	       printf("2.Enqueue from rear\n");
	       printf("3.Dequeue\n");
               printf("4.Display\n");
	       printf("5.Exit\n");
               scanf("%d",&ch2);
               switch(ch2)
               {
                 case 1:enqueue();
                        break;
                 case 2:enqueuerear();
                        break;
                 case 3:dequeue();
                        break;
                 case 4:display();
                        break;
		 case 5:
                        break;
                 default :printf("Invalid option!!!");
                        break;
	       }	
               }while(ch2!=5);*/
        break;
        default : printf("Invalid option!!!");
        break;
       }
      }while(ch1!=3);
 return 0;
}            
 
               
             
	
