#include<stdio.h>

main()
{
	int a,b,Sum;
	int *p,*q;
	printf(" Input value for the 1st number = ");
	scanf("%d",a); p=&a;
	printf(" Input value for the second number =");
	scanf("%d",b); q=&b;
	Sum=*p+*q;
	printf(" Sum of the two numbers = %d",Sum);
	printf("\n The Sum address is = 0x%x",&Sum);
	
}
