//C program to demosnatrate nested structure in C: Demonstrating the example of separate and embedded structure.
/** separate structure
#include<stdio.h>
struct icecream
{
	char flavour[50],comp[50];
	int price;
};
struct parlour
{
	char type[50];
    struct icecream i;
};
int main()
{
	int k,n;
	struct parlour par;
	printf("enter flavour : ");
	scanf("%s",&par.i.flavour);
	printf("enter manufacturing company : ");
	scanf("%s",&par.i.comp);
	printf("enter type of icecream : ");
	scanf("%s",&par.type);
	printf("enter the price of  type : ");
	scanf("%d",&par.i.price);
	printf("flavour is : %s\ncompany is : %s\ntype is : %s\nprice is : %d",par.i.flavour,par.i.comp,par.type,par.i.price);
}
**/

//embedded structure
#include<stdio.h>
struct parlour
{
	char type[50];
    struct icecream
    {
	char flavour[50],comp[50];
	int price;
    }i;  
};
int main()
{
	int k,n;
	struct parlour par;
	printf("enter flavour : ");
	scanf("%s",&par.i.flavour);
	printf("enter manufacturing company : ");
	scanf("%s",&par.i.comp);
	printf("enter type of icecream : ");
	scanf("%s",&par.type);
	printf("enter the price of  type : ");
	scanf("%d",&par.i.price);
	printf(" flavour is\n %s \n company is\n %s \n type is \n %s price is \n %d",par.i.flavour,par.i.comp,par.type,par.i.price);
}
