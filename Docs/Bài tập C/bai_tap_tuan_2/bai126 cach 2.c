// De bai: sap sep cac gia tri trong mang theo thu tu tu nho toi lon
#include<stdio.h>
main()
{
	int i,n,k,MAX;
	int a[n];
	int b[n];
	printf(" Nhap so luong phan tu cua mang = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf(" Nhap phan tu thu %i = ",i+1);
		scanf("%i",&a[i]);
	}
	MAX=a[0];
	while(k<0)
	{
	for(i=1;i<n;i++)
	{
		if(a[i]>MAX)
			MAX=a[i];
	}
	MAX=b[k];
	k--;
	}
	printf(" Thu tu cac phan tu tu nho toi lon la:");
	for(i=0;i<n;i++)
		printf(" %i",a[i]);
}
