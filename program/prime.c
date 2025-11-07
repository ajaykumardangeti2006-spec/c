#include<stdio.h>
int main()
{
	int i,j,n,flag;
	printf("enter n value: ");
	scanf("%d",&n);
	flag=0;
	 for(i=2;i=n/2;i++){
	 	if(n%i==0)
	 	{
	 		flag=1;
	 		break;
		 }
	 }
	  if (flag==0){
	  	printf("%d is a prime number",n);
	  }
	  else{
	  	printf("%d is NOT a prime number",n);
	  }
	    return 0;
}
