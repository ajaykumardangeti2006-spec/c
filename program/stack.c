#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
void push(int);
int pop();
int peek();
void display();
int stack[SIZE], top = -1;
int isEmpty() {
	if(top==-1)
	return 1;
    else
    return 0;
}


void push(int x) {
    if (top == SIZE - 1) {
        printf("Stack is Full!\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &x);
        stack[++top] = x;
        printf("%d pushed into the stack.\n", x);
    }
}
int pop()
{
	int x;
	if (top==-1){
		printf("stack is underflow\n");
		x=0;
	}
	else {
		x = stack[top];
		top--;
	}
	return x;
}
int peek()
{
	int x;
	if(top==-1){
		printf("empty");
	}
	else{
		x=stack[top];
	}
	return x;
}
void display (){
    if (isEmpty()==1) {
        printf("Stack is Empty!\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main function with do-while loop
int main() {
    int choice;
    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. peek\n4.display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("enter the element: ");
			scanf("%d",&x)
			push(x); break;
            case 2:x= pop();
			printf("popped elementnis %d\n",x); break;
            case 3: x=peek();
			printf("the most top element is %d\n",x); break;
            case 4:display(); 
               
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

