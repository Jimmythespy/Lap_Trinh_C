// De bai: tinh tong cac gia tri am trong mang cac so thuc
#include<stdio.h>
main()
{
	int i,n;
	float a[n],S;
	printf(" Nhap so luong phan tu cua mang = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf(" Nhap phan tu thu %i = ",i+1);
		scanf("%i",&a[i]);
		if(a[i]<0)
		{
			S=S+a[i];
		}
	}
	printf(" Tong cac gia tri am trong mang la S=%f",S);
}
