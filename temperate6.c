#include<stdio.h>

main()

{
	int fact=1,n,a=1;
	printf("Enter Number=");
	scanf("%d",&n);
	do	{
			fact=fact*n;
			n--;
		}
	while(n>=a);
	printf("Factorial value = %d",fact);
}
