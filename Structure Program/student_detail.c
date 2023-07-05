//C program to read and print student details using structure pointer.
#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[50];
	char branch[50];
	int age,rollno,year;
};

int main()
{
	int i,n;
	struct student *ptr;
	printf("enter the number of students : ");
	scanf("%d",&n);
	ptr=(struct student*)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		printf("enter name of student : ");
		scanf("%s",&(ptr+i)->name);
		printf("enter branch : ");
		scanf("%s",&(ptr+i)->branch);
		printf("enter student age : ");
        scanf("%d",&(ptr+i)->age);
        printf("enter roll no : ");
        scanf("%d",&(ptr+i)->rollno);
        printf("enter year : ");
        scanf("%d",&(ptr+i)->year);
	
    }
		printf("\nStudent details\n");
		for(i=0;i<n;i++)
		{
			printf("Name of student is : %s\nBranch is : %s\nAge is : %d\nRoll no is : %d\nYear is : %d\n",(ptr+i)->name,(ptr+i)->branch,(ptr+i)->age,(ptr+i)->rollno,(ptr+i)->year);
		}
	free(ptr);
}
