// De bai: tim vi tri cua gia tri lon nhat trong bang 
#include<stdio.h>
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
	MAX=array[0];
	for(i=0;i<n;i++)
	{
		if(array[i]>MAX)
			MAX=array[i];
			imax=i;
	}
	printf("\n Vi tri cua gia tri lon nhat la %i",imax);
}
