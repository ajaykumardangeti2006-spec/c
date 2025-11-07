#include<stdio.h>
#include<stdlib.h>
struct node
     {
     	struct node *prev;
	int data;
	struct node *next ,*head,*end;
    };
   
    void create_list()
    struct node *create_node();
    void display();
    struct node *head=NULL,*end=NULL;
    int count=0;
    struct node *create_node()
{
    	
	int info;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("can't allocate memory\n");
		return ;
	}
	printf("\n enter data into node:");
	scanf("%d",&info);
	newnode->data=info;
	newnode->prev=NULL;
	newnode->next=NULL;
    return newnode;
}
void create_list()
{
struct node *newnode =create_node();
if(head==NULL){
	head =end= newnode;
} else
{
	end->next =newnode;
	newnode->prev =end;
	end =newnode;
}
count++;
printf("......Node is created/added.....\n");
}
void display()
{ 
struct node *temp;
if(head=NULL){
	printf("list is empty\n");
	return ;
}
temp =head;
printf("\n list elements(forward):\n");
while(temp! = NULL)
{
	printf("%d->",temp->data);
	temp=temp->next;
}
printf("end NULL\n");
}
void reverse_order()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp= end;
	printf("\n list elements(backward):\n");
	while(temp!=NULL)
	{ 
	printf("%d->",*temp->data);
	temp=temp->prev;
	}
	printf("HEAD NULL\n");
}
int main()
{
	int ch;
	while(1);
	{
		printf("\n***index***\n");
		printf("1,create_node\n");
		printf("2.display\n");
		printf("3. reverse_order\n");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create_node(); break;
			case 2: display(); break;
			case 3: reverse_order(); break;
			case 4: exit(0);
			default: printf("\n --invalid choice--");
		}
	}
}
