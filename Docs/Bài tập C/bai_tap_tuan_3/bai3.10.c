// De bai: viet ham cong cua hai so thuc
#include<stdio.h>
// function prototype
float sum(float a,float b);
// Ham main
main()
{
	float a,b,Sum;
	printf(" Nhap gia tri cua a: ");
	scanf("%f",a);
	printf(" Nhap gia tri cua b: ");
	scanf("%f",b);
	Sum=sum(a,b);
	printf(" Tong cua hai so la Sum=%f",Sum);
}
// Ham tong
float sum(float a, float b)
{
	float Sum;
	Sum=a+b;
	return Sum;
}
