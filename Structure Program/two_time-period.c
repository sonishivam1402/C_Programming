//C program to calculate difference between two-time periods (Using call by reference).
#include<stdio.h>

struct time
{
int h,m,s;
};

int diff(struct time t1,struct time t2, struct time *t)
{
	int a,b,c;
	t->h=t1.h-t2.h;
	t->m=t1.m-t2.m;
	t->s=t1.s-t2.s;
	printf("The difference between two time periods is %d %d %d ",t->h,t->m,t->s);
}
int main()
{
	int a,b;
	struct time x,y;
	struct time ti;
	printf("Enter hours : ");
    scanf("%d",&x.h);
    printf("Enter minutes : ");
    scanf("%d",&x.m);
    printf("Enter seconds : ");
    scanf("%d",&x.s);
    printf("Enter hours : ");
    scanf("%d",&y.h);
    printf("Enter minutes : ");
    scanf("%d",&y.m);
    printf("Enter seconds : ");
	scanf("%d",&y.s);
	diff(x,y,&ti);
}
