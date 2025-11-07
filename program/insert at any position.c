#include<stdio.h>
#include<stdlib.h>
struct node
     {
	int data;
	struct node *next;
    };
    struct node*head=NULL,*end=NULL;
    int count=0;
    void insert_at_any_position();
    void display();
    void insert_at_any_position()
{
	int info,pos,i;
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("memory not created");
		return ;
	}
	printf("\n enter data into node:");
	scanf("%d",&info);
	newnode->data=info;
	newnode->next=NULL;
	printf("enter position");
	scanf("%d",&pos);
	if(pos<1|| pos>count)
	{
		printf("can't input");
		free(newnode);
		return;
	}
	temp = head;
	for(i=1;i<pos-1;i++)
	{
		temp=temp-> next;
	}
	newnode->next =temp->next;
	temp->next=newnode;
	count++;
	printf("\n node is added:");
}
	void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("\nlist is empty");
		return;
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
int main()
{
		int choice,pos;
	
    while(1) 
	{
		  printf("\nMenu:\n");
        printf("1. insert_at_any_position\n");
        printf("2. Display List\n");
        printf("3. count node\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
		{
            case 1:insert_at_any_position();break;
            case 2: display(); break;
           case 3:printf("No of nodes are :%d",count);break;
			case 4:exit(0);
            default: printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
