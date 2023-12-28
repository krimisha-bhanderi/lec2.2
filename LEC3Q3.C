#include<stdio.h>
#include<conio.h>
void main()
{
	int base,height,area;
	clrscr();

	printf("Enter the value of base:");
	scanf("%d",&base);

	printf("Enter the value of height:");
	scanf("%d",&height);

	area=(base*height)/2;

	printf("area of triangle is:%d",area);

getch();
}