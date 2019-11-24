// De bai: viet ham liet ke vi tri cua cac gia tri am trong mang mot chieu so thuc
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	printf(" Nhap gia tri so luong phan tu cua mang = ");
	scanf("%d",&n);
	long a[n]; 							// Nhap gia tri cua mang
	for(i=0;i<n;i++)
	{
		printf(" Nhap gia tri cua phan tu thu %d = ",i+1);
		scanf("%d",&a[i]);
	}
	printf(" Vi tri cua cac so am trong mang la:");  // Xuat gia tri cua mang
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
			continue;
		printf(" %d,",a[i]);
	}
	getch();
}
