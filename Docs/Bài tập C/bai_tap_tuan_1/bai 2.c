// De bai: tinh S(n)=1*1+2*2+3*3+......+n*n
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,S=1;
	printf("- nhap gia tri cua n");
	printf("\n- n=");
	scanf("%d",&n);
	if(n==0)
	{
		printf("\n- gia tri cua n khong hop le"); return 0;
		}	
	for(i=1;i<=n;i++) 
		S=i*i+S;
	printf("\n- gia tri cua S la");
	printf("\n- S=%d",S);
	getch();
	return 0;
}
// note: ko duoc return 0; o giua dong
