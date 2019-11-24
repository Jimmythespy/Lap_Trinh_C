// De bai: Nhap gia tri duong dau tien trong bang neu khong co tra lai ve -1
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,flag=0;
	printf(" Nhap gia tri so luong phan tu cua mang = ");
	scanf("%d",&n);
	int a[n]; 							
	for(i=0;i<n;i++)
	{
		printf(" Nhap gia tri cua phan tu thu %d = ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			printf(" Co phan tu duong trong mang");
			flag=1;
			break;
		}	
	}
	if(flag=1)
	{
		return -1;
	}
}
