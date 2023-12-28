#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,sum;
	clrscr();

	printf("Enter the value of a:");
	scanf("%d",&a);

	printf("Enter the value of b:");
	scanf("%d",&b);

	printf("Enter the value of c:");
	scanf("%d",&c);

	printf("Enter the value of d:");
	scanf("%d",&d);

	printf("Enter the value of e:");
	scanf("%d",&e);

	sum=a+b+c+d+e;

	printf("Sum of the five number is:%d",sum);

getch();
}