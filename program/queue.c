#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue [SIZE];
int front==-1,rear=-1;
void enqueue(int x)
{
	if(rear ==SIZE-1)
	prinft("queue is full!\n");
	else{
		if(front==-1){
			front =0;
		}
		rear  = rear+1;
		queue[rear]=x;
		printf("inserted \n");
	}
}
void dequeue()
{
	if(front==-1|| front>rear)
	printf("queue is empty\n");
	else
	{
		x =queue[front];
		front = front+1;
	}
}
void display()
{
	int i;
	if(front=-1 ||front>rear)
	printf("queue is empty!\n");
	else{
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue[i]);
			printf("\n");
		}
	}
}
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	display();
	dequeue();
	display();
	return 0;
}
