// De bai: viet thuat toan tim gia tri lon nhat trong mot mang so thuc
#include<stdio.h>
main()
{
	int n,MAX,i;
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
	}
	printf("\n Gia tri lon nhat la %i",MAX); // O day co the printf luon gia tri cua array[imax]
}
