#include<stdio.h>
int fib(int);
main()
{
	int n,i;
	printf("ente the range");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d/t",fib(i));
	}
}
int fib(int x)
{
	if(x==0)
	return 0;
	else if(x==1)
	return 1;
	else return fib(x-1)+fib(x-2);
}
