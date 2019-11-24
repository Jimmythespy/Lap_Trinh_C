// De bai: tim vi tri va gia tri cua so duong nho nhat trong mang mot chieu cac so thuc
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,flag=0,MIN,imin;
	printf(" Nhap gia tri so luong phan tu cua mang = ");
	scanf("%d",&n);
	int a[n]; 							
	for(i=0;i<n;i++)
	{
		printf(" Nhap gia tri cua phan tu thu %d = ",i+1);
		scanf("%d",&a[i]);
	}
	MIN=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>0&&a[i]<MIN)
		{
			MIN=a[i];
			imin=i;
			flag=1;
		}
	}
	if(flag=1)
		printf(" Gia tri cua so duong nho nhat trong mang la: %d\n Vi tri cua phan tu nay la: %d",MIN,imin);
	else
		return -1;
}
