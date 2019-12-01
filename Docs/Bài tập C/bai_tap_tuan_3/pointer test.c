#include<stdio.h>
#include<conio.h>
main()
{
	int m=10,*p;
	p=&m;
	printf(" Show the definitions of a pointer p and varibale m=10\n pointer p point to m:\n --------------------------------");
	printf("\n Value for poniter p = %d",*p);
	printf("\n p store the address of = 0x%x",p);
	printf("\n The address for m = 0x%x",&m);
	printf("\n The value for m = %d",m);
}
