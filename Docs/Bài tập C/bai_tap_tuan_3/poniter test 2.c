#include<stdio.h>
#include<conio.h>
main()
{
	int m=69,*p;
	p=&m;
	printf(" Value for varible m = %d",m);
	printf("\n address of varible m = 0x%x",&m);
	printf("\n Value that poniter p store = %d",*p);
	printf("\n Address that poniter p store = 0x%x",p);
	m=12;
	printf("\n Value for varible m = %d",m);
	printf("\n address of varible m = 0x%x",&m);
	printf("\n Value that poniter p store = %d",*p);
	printf("\n Address that poniter p store = 0x%x",p);
	m=23;
	printf("\n Value for varible m = %d",m);
	printf("\n address of varible m = 0x%x",&m);
	printf("\n Value that poniter p store = %d",*p);
	printf("\n Address that poniter p store = 0x%x",p);
}
