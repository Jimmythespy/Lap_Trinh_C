// De bai: S(n)=1/1+1/2+...+1/2n
#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	int n;
	float i,S=0;
	printf(" nhap gia tri cua n");
	printf("\n n=");
	scanf("%d",&n);
	for(i=1;i<=2*n;i++)
		S=S+(1/i);
	printf(" gia tri cua S la\n S=%f",S);
	getch();
}
