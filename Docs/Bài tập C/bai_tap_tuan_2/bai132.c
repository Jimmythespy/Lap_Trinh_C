// De bai: nhap cac gia tri vao bang so nguyen, xuat ra cac gia tri chan
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	printf(" Nhap gia tri so luong phan tu cua mang = ");
	scanf("%d",&n);
	int a[n]; 							// Nhap gia tri cua mang
	for(i=0;i<n;i++)
	{
		printf(" Nhap gia tri cua phan tu thu %d = ",i+1);
		scanf("%d",&a[i]);
	}
	printf(" Gia tri cua cac so chan trong mang la:");  // Xuat gia tri cua mang
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
			continue;
		printf(" %d,",a[i]);
	}
	getch();
}
