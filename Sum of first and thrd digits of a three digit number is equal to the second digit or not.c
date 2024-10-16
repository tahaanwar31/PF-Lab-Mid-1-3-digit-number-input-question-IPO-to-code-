#include <stdio.h>
#include <limits.h>
#include <conio.h>
int main()
{
	int number,iterations=0,firstdigit,seconddigit,thirddigit,temp;
	printf("Enter a number: \n");
	scanf("%d",&number);
	temp=number;
	while (temp!=0)
	{
		temp=temp/10;
		iterations=iterations+1;
	}
	temp=number;
	if (iterations==3)
	{
		thirddigit=temp%10;
		temp=temp/10;
		seconddigit=temp%10;
		temp=temp/10;
		firstdigit=temp;
	}
	if (firstdigit+thirddigit==seconddigit)
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
}