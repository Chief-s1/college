#include<stdio.h>
#define max 6
void enqueue(int q[],int *f,int *r)
{
    if(*r==max-1)
        printf("Queue is full \n");
    else
    {
        if(*f==-1 && *r==-1)
        {
         (*r)++;
         (*f)++;
        }
        printf("Enter element :");
        scanf("%d",&q[*r]);
        (*r)++;
    }    
}
void dequeue(int q[],int *f,int *r)
{
    if(*f==*r || *f==-1)
        printf("Queue is empty\n");
    else
    {
        printf("deleted element  : %d\n",q[*f]);
        for(int i=0;i<*r-1;i++)
        {
            q[i]=q[i+1];
        }
        (*r)--;
    }    
}
void display(int q[],int f,int r)
{
    printf("Queue elements :\n");
    for(int i=f;i<r;i++)
        printf("%d ",q[i]);
}
int main()
{
    int que[max],front=-1,rear=-1,ch;
    do
    {
    printf("\t\tQUEUE OPERATIONS MENUE\n");
    printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.Exit\n");
    printf("Enter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: enqueue(que,&front,&rear);
        break;
        case 2: dequeue(que,&front,&rear);
        break;
        case 3: display(que,front,rear);
        break;
        case 4: break;
        default:printf("Invalid option!!\nTry again\n");
        break;
    }
    }while(ch!=4);
}