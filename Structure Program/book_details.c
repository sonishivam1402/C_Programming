//Write a C program to read and print the N book details using structure and Dynamic memory allocation. 
#include<stdio.h>
#include<stdlib.h>
struct book
{
	char name[50];
	char author[50];
	int price,year,edi;
};

int main()
{
	int i,n;
	struct book *ptr;
	printf("Enter the number of books : ");
	scanf("%d",&n);
	ptr=(struct book*)malloc(n*sizeof(struct book));
	for(i=0;i<n;i++)
	{
		printf("enter name of book : ");
		scanf("%s",&(ptr+i)->name);
		printf("enter author name : ");
		scanf("%s",&(ptr+i)->author);
		printf("enter book price and publishment year and edition : ");
		scanf("%d %d %d",&(ptr+i)->price,&(ptr+i)->year,&(ptr+i)->edi);
	}
		printf("\nBook Details\n");
		for(i=0;i<n;i++)
		{
			printf("Name of book is : %s\nAuthor  is : %s\nPrice is : %d\nYear of publishing is : %d\nEdition is : %d\n",(ptr+i)->name,(ptr+i)->author,(ptr+i)->price,(ptr+i)->year,(ptr+i)->edi);
		}
	free(ptr);
}
