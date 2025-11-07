#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
void create_list();
struct node *create_node();
void display();
struct node *head = NULL,*end =NULL;
int count=0;
struct node *create_node()
{
	int info;
	struct node *newnode;
	newnode =(struct node*)malloc(sizeof(struct node));
	if(newnode == NULL){
		printf("can't allocate memory\n");
	
	}
	printf("\n enter data into a node ");
	scanf("%d",&info);
	newnode ->data =info;
	newnode -> prev =NULL;
	newnode->next=NULL;
	return newnode;
}
void create_list()
{
struct node *newnode = create_node();
if(head==NULL)
{
	head = end=newnode;
}
else{
	end->next =newnode;
	newnode->prev=end;
	end =newnode;
}
count++;
printf(".....node is created/added...\n");
}
void display()
{
	struct node *temp;
	if(head=NULL){
		printf("list is empty");
		return ;
	}
	temp =head;
	printf("\nlist elements(forward):\n");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp= temp->next;
	}
	printf("END NULL\n");
}
void reverse_order()
{
	struct node *temp;
	if(head == NULL){
		printf("list is empty\n");
		return;
	}
	temp=end;
	printf("\nlist elements(backward):\n");
	while (temp!=NULL){
		printf("%d->",temp->data);
		temp = temp->prev;
	}
	printf("HEAD NULL\n");
}
void insert_at_beg()
{
	struct node *newnode =create_node();
	if (head ==NULL){
		head =end =newnode;
	}
else{
	head->prev=newnode;
	newnode->next=head;
	head =newnode;
}
count++;
printf("....node is added at first.....\n");
}
void insert_at_end()
{
	struct node*newnode =create_node();
	if(head==NULL)
	{
		head =end= newnode;
	}
	else{
		end->next=newnode;
		newnode->prev=end;
	count++;
	}

printf("....node is added at last...\n");
}
void insert_at_any()
{
	struct node*newnode,*temp,*curr;
	int pos ,i;
	printf("\n enter position to insert:");
	scanf("%d",&pos);
	if(pos<1||pos>count+1){
	printf("invaild position");
	return;
	}
	if(pos==1){
		insert_at_beg();
		return;
	}
	else if(pos==count+1){
	insert_at_end();
	return;
	}
	newnode =create_node();
	curr=head;
	for(i=0;i<pos-1;i++)
	{
		newnode->next=curr;
		newnode->prev=temp;
		curr->prev=newnode;
		temp->next=newnode;
		count++;
		printf("...node is added at position %d....\n",pos);
	}
	}
	int main(){
	int ch;
	while(1)
	{
		printf("\n******MENU******");
		printf("\n1.create \n2.display \n3.insert node at beg \n4.insert node at any\n5.insert node at end");
		printf("\n enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: create_list();break;
			case 2: display();break;
			case 3:insert_at_beg;break;
			case 4: insert_at_end;break;
			case 5: insert_at_any;break;
			case 6: exit(0);
			default: printf("\nInvalid choice");
		}
	}
	return 0;
}
