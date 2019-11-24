// De bai: tim vi tri cua gia tri nho nhat trong bang mot chieu so thuc
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,flag=0,iMIN;
	float MIN;
	printf(" Nhap gia tri so luong phan tu cua mang = ");
	scanf("%d",&n);
	float a[n];
	for(i=0;i<n;i++)
	{
		printf(" Nhap gia tri cua phan tu thu %d = ",i+1);
		scanf("%d",&a[i]);
	}
	MIN=a[0];
	for(i=1;i<n;i++)
	{
		if(MIN>a[i])
		{
			MIN=a[i];	
			iMIN=i;
		}
	}
	printf(" vi tri cua phan tu nho nhat trong mang la: %d",iMIN);
}
