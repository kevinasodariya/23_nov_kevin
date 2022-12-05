#include<stdio.h>
void main()
{
	int a,b;
	printf("enter your age:");
	scanf("%d",&a,b);
	if(a>=18)
	{
		printf("eligible vote");
	}
	else
	{
		printf("not eligible to vote");
	}
}
