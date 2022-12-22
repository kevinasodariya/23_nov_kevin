#include<stdio.h>
void main()
{
	char a;
	printf("Enter any character: ");
	scanf("%c",&a);
	
	if(a>='A' && a<='Z'){
	printf("the number is uppercase");
}
    else{
    	printf("the number is lower case");
	}
	
}
