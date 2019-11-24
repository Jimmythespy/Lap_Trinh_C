// De bai: sap sep cac gia tri trong mang theo thu tu tu nho toi lon
#include<stdio.h>
main()
{
	int i,n,MIN,sub;
	int a[n];
	printf(" Nhap so luong phan tu cua mang = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf(" Nhap phan tu thu %i = ",i+1);
		scanf("%i",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(sub=i++;i<n;sub++)
		{
			if(a[sub]<MIN)
				MIN=a[sub];
		}
		a[sub]=a[i];
		MIN=a[i];
	}
	printf(" Thu tu cac phan tu tu nho toi lon la:");
	for(i=0;i<n;i++)
		printf(" %i",a[i]);
}
