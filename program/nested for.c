#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter row number: ");
	scanf("%d",&n);
	k=1;
	for(i=1;i<=n;i++){
		printf("\n");
		for(j=1;j<=n;j++){
			printf("%4d",k);
			k++;
		}
	}
	return 0;
}
