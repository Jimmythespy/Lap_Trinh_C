#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c;
	printf("\n nhap gia tri a=");
	scanf("%d",&a);
	printf("\n nhap gia tri b=");
	scanf("%d",&b);
	printf("\n nhap gia tri a=");
	scanf("%d",&c);
	if(a+b>c||a+c>b||b+c>a)
{
	printf("\n day la 3 canh cua mot tam giac");
	if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b)
	{
		printf(" vuong");
	}
	if(a==b==c)
	{
		printf(" deu");
	}
	if((a==b||b==c||c==a)&&!(a==b==c))
	{
	printf(" can");
	}
}
	else
{
	printf("day khong phai la 3 canh cua mot tam giac");
}
}
