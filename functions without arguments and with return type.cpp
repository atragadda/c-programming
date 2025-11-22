#include<stdio.h>
int addition();
main()
{
	int result;
	result=addition();
	result=addition();
	printf("the result i %d",result);
}
int addition()
{
	int a,b,c;
	printf("enter a&b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
