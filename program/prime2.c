#include<stdio.h>
int main()
 {
 	int i,n,flag,range;
 	printf("enter range value: ");
 	scanf("%d",&range);
 	for(n=3;n<=range;n++)
 	{
 		flag=0;
 		for(i=3;i<=n/2;i++){
 			if(n%i==0)
 			{
 				flag=1;
 				break;
			 }
		 }
		 if(flag==0)
		 printf("%d ",n);
	 }
	 return 0;
 }
