// De bai: kiem tra xem trong mang co gia ri chan nho hon 2019 khong
#include<stdio.h>
#include<conio.h>
main()
{
	int n,MAX,i,imax;
	printf(" Nhap so phan tu cua tap hop = ");
	scanf("%i",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		printf(" Nhap phan tu thu %i = ",i+1);
		scanf("%i",&array[i]);
		if(array[i]%1!=0)
		{
			printf("\n gia tri cua phan tu khong hop le");
			i--;
		}
	}
	for(i=0;i<n;i++)
	{
		if(array[i]%2==0&&array[i]<2019)
			printf("\n Ton tai gia tri can tim trong mang :)");
			break;
	}
	getch();
}
