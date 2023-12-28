#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,s4,s5,s6,s7,s8;
	float pr,avg;
	clrscr();

	printf("Enter the value of subject1:");
	scanf("%d",&s1);

	printf("Enter the value of subject2:");
	scanf("%d",&s2);

	printf("Enter the value of subject3:");
	scanf("%d",&s3);

	printf("Enter the value of subject4:");
	scanf("%d",&s4);

	printf("Enter the value of subject5:");
	scanf("%d",&s5);

	printf("Enter the value of subject6:");
	scanf("%d",&s6);

	printf("Enter the value of subject7:");
	scanf("%d",&s7);

	printf("Enter the value of subject8:");
	scanf("%d",&s8);

	avg=(s1+s2+s3+s4+s5+s6+s7+s8)/8;

	printf("the average is:%f\n",avg);


getch();
}