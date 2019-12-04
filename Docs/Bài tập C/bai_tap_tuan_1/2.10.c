/* De bai: nhap vao ba canh cua mot tam giac
** viet thuat toan kiem tra xem ba canh co tao thanh mot tam giac hay khong
** Neu co do la tam giac loai gi
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	// Nhap gia tri cau 3 canh
	int a,b,c;
	printf("\n nhap gia tri a=");
	scanf("%d",&a);
	printf("\n nhap gia tri b=");
	scanf("%d",&b);
	printf("\n nhap gia tri a=");
	scanf("%d",&c);
	// kiem tra xem 3 canh co tao thanh mot tam giac hay khong?
	if(a+b>c||a+c>b||b+c>a)
	{
	printf("\n day la 3 canh cua mot tam giac");
	// Tam giac vuong
	if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b)
	{
		printf(" vuong");
	}
	// Tam giac deu
	if(a==b==c)
	{
		printf(" deu");
	}
	// Tam giac can
	if((a==b||b==c||c==a)&&!(a==b==c))
	{
	printf(" can");
	}
	}
	// Khong phai la tam giac
	else
	{
	printf("day khong phai la 3 canh cua mot tam giac");
	}
}
