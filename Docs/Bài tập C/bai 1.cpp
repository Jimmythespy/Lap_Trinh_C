//De bai: tinh S(n)=1+2+3+4+.....+n

#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	int n,S;
	printf("-nhap gia tri cua n");
	printf("\n-n=");
	scanf("%d",&n);
	S=(n*(2+(n-1)))/2;
	printf("\n-gia tri cua S ung voi n la");
	printf("\n-S=%d",S);
	return 0;
	getch();
}
