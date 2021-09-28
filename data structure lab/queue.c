#include<stdio.h>
#define max 5
void enqueue(int ar[],int *rear,int *front)
{
if(*rear==max-1)
printf("QUEUE IS FULL \n");
else
{
(*rear)++;
if(*front ==-1)
 (*front)++;
printf("Enter a element :");
scanf("%d",&ar[*rear]);
}
}
void dqueue(int ar[],int *rear,int *front)
{
if(*rear<*front||*front==-1)
{
printf("Queue is empty \n");
*front =-1;
*rear=-1;
}
else
{
printf("Elenent deleted = %d\n",ar[*front]);
(*front)++;
}
}
void display(int f,int r,int arr[])
{
for(int i=f;i<=r;i++)
printf("%d ",arr[i]);
printf("\n");
}
int main()
{
int ch,front=-1,rear=-1,ar[max];
do
{
printf("-------MENUE---------\n");
printf("1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT\n");
printf("Enter your choice :");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue(ar,&rear,&front);
       break;
case 2:dqueue(ar,&rear,&front);
       break;
case 3:display(front,rear,ar);
       break;
case 4:printf("Exiting......\n");
       break;
default :printf("INVALID OPTION !!!!\n");
break ;
}
}
while(ch!=4);
return 0;
}


