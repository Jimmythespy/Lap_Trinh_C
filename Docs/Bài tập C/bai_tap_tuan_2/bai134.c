// De bai: viet ham tim gia tri lon nhat trong mang so thuc
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	float MAX;
	printf(" Nhap gia tri so luong phan tu cua mang = ");
	scanf("%d",&n);
	float a[n]; 							// Nhap gia tri cua mang
	for(i=0;i<n;i++)
	{
		printf(" Nhap gia tri cua phan tu thu %d = ",i+1);
		scanf("%d",&a[i]);	
	}
	MAX=a[0];
	for(i=1;i<n;i++)
	{
		if(MAX<a[i])
			MAX=a[i];
	}
	printf(" Gia tri lon nhat trong mang la: %f",MAX);
}
