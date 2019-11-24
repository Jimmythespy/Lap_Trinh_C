// De bai: Dem so luong so nguyen to nho hon 100 trong bang
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,so_luong,i_phu;
	printf(" Nhap so phan tu cua tap hop = ");
	scanf("%i",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		printf(" Nhap phan tu thu %i = ",i+1);
		scanf("%i",&array[i]);
		if(array[i]>=100)
			continue;
		else 
		{
			for(i_phu=2;i<=100;i++)
			{
				if(array[i]%i_phu==0)
					so_luong++;
			}
		}
	}
	printf(" So cac phan tu thoa man dieu kien cua de bai la %i",so_luong);
}
