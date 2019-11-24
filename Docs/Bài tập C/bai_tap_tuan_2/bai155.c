// Bai tap luyen tu duy: tim cac gia tri trong mang xa gia tri cua x nhat
// Y tuong dung ham abs() (tri tuyet doi) cua hieu gia tri trong mang va x
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i,n,MAX,temp,x; // bien tam thoi: temp
	printf(" Nhap gia tri so luong phan tu cua mang = ");
	scanf("%d",&n);
	int a[n]; 	
	int b[100];
	pritnf(" Nhap gia tri cua phan tu x:\n x= ");
	scanf("%d",&x);					
	for(i=0;i<n;i++)
	{
		printf(" Nhap gia tri cua phan tu thu %d = ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=abs(a[i]-x);
		if(temp>MAX)
			temp=MAX;
	}
	printf(" gia tri cua phan tu xa x nhat la: %d",MAX+x);
}
