#include<stdio.h>
void main()
{
	int p,r,t;
	float i;
	
	printf("Enter P,R,T:");
	scanf("%d%d%d",&p,&r,&t);
	
	i=p*r*t/100;
	printf("simple interest:%f",i);
	
}
