#include<stdio.h>
int main()
{
	float F,C;
	int choice;
	printf("enter your choice(1 or 2):");
	scanf("%d",&choice);
	  if(choice == 1){
	  	printf("enter temperature in F: ");
	  	scanf("%f",&F);
	  	C =(F -32)*5.0/9.0;
	  	printf("temperature in C : %.2f C\n",C);
	  }
	  elseif(choice ==2);{
	  	printf("enter temperature in C : ");
	  	scanf("%f",&C);
	  	 F=(C*9.0/5.0)+32;
	  	 printf("temperature in F : %.2f F\n",F);
	  }
	  	printf("invalid choice! please enter 1 or 2.\n");
}
