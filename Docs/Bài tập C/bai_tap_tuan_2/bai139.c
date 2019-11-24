//De bai: Tim vi tri so hoan thien cuoi cung trong mang
// SO HOAN THIEN: TONG CAC UOC CUA NO BNAG CHINH NO
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,i1,i2,S,flag=0;    // Bien i1 la bien dieu khien, i2 la gia tri cua vi tri phan tu b[100]
	printf(" Nhap gia tri so luong phan tu cua mang = ");
	scanf("%d",&n);
	int a[n];
	int b[100];       // Mang chua gia tri uoc cua so
	for(i=0;i<n;i++)
	{
		printf(" Nhap gia tri cua phan tu thu %d = ",i+1);
		scanf("%d",&a[i]);
	}
	i2=0;              // Cho gia tri ban dau cua bien i2
	for(i=n-1;i>0;i--) // Xet gia tri tu cuoi len de tim duoc gia tri cuoi
	{
		for(i1=2;i<a[i];i++)
		{
			if(a[i]%i1==0)    // Tim cac uoc va tong cac uoc
			{
				b[i2]=i1;
				S=S+b[i2];
				i2++;
			}
			if(S=a[i])        // Kiem tra dieu kien
			{
				printf(" Gia tri cua so hoan hao cuoi cung trong mang la: %d",a[i]);
				flag=1; break;
			}
		}
		if(flag=1) 
			break;
	}
}
