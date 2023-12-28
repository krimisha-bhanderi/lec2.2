#include<stdio.h>
#include<conio.h>
void main()
{
	int width,height,area;
	clrscr();

	printf("Enter the value of width:");
	scanf("%d",&width);

	printf("Enter the value of height:");
	scanf("%d",&height);

	area=width*height;

	printf("area of rectangle is:%d",area);
	getch();
	}