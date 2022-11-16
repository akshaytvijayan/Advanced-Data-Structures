#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int q[SIZE];
int rear=0,front=0;
void insertq(int item)
{
int r1=rear;
r1=(r1+1)%SIZE;
if(r1==front)
printf("Queue is full");
else
{
rear=r1;
q[rear]=item;
}
}
int deleteq(int *status)  //function to delete  
{
if(front==rear){
*status=0;
printf("Queue is empty"); 
}
else
{
front=(front+1)%SIZE;
*status=1;
return q[front];
}
}
int searchq(int item)  //function to search 
{
int t;
t=front;
if(front!=rear)
{
t=(t+1)%SIZE;
while(t!=rear&&q[t]!=item)
t=(t+1)%SIZE;
if(q[t]==item)
return t;
else
return 0;
}
else
return 0;
}
void main()
{
int item,opt,ans,status;
do
{
printf("\n 1.Insert:\n");
printf("\n 2.Delete:\n");
printf("\n 3.Search:\n");
printf("\n 4.Exit:\n");
printf("\n Enter the option:");
scanf("%d",&opt);

switch(opt)
{
case 1:printf("\n Data : ");
scanf("%d",&item);
insertq(item);
break; 

case 2:item=deleteq(&status);
if(status==1)
printf("\n Deleted = %d \n", item);
break;

case 3:printf("Enter the number to search : ");
scanf("%d",&item);
ans=searchq(item);
if(ans==0)
printf("not found");
else
printf("Item found at %d position",ans);
break;

case 4:exit(0);
}//end of switch
}// do end of do
while(1);
}//main()end



