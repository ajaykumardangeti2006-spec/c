#include<stdio.h>
struct Book
{
	char Title[20];
	int pages;
	float price;
}B2={"cs",25,250.0};
void main()
{
	struct Book B1;
	scanf("%s",&B1.Title);
	scanf("%d",&B1.pages);
	scanf("%f",&B1.price);
	printf("\nBook Details are:\n");
	printf("%s,%d,%f\n",B1.Title,B1.pages,B1.price);
	printf("%s,%d,%f",B2.Title,B2.pages,B2.price);
	return 0;
	
	
}
