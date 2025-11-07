#include<stdio.h>
#include<stlib.h>
void create_nodes();
void display();
void insert_end();
void insert_any();
void insert_beg();
void delete_beg();
void delete_end();
void delete_any_pos();
void search();
void replace();
struct node*head,*end;
int count=0;
struct node
{
	int data;
	struct node*next;
};
void create_nodes()
{
	int info;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		print("overflow\n");
		return;
	}
}
printf("\nenter data into a node:");
scanf("%d",&info);
newnode->data=info;
newnode->next=NULL;
if(head==NULL)
head = end =newnode;
else{
	
}
