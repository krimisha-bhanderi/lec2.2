#include<stdio.h>
#include<conio.h>
void main()
{
	int principal,rate,time,SI;
	clrscr();

	printf("Enter the value of principal:");
	scanf("%d",&principal);

	printf("Enter the value of rate:");
	scanf("%d",&rate);

	printf("Enter the value of time:");
	scanf("%d",&time);

	SI=(principal*rate*time)/100;

	printf("simple intrest is:%d",SI);

getch();
}