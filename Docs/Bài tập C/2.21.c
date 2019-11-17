// De bai: nhap vao mot day cac chu so, day dung khi so nhap vao bang khong, tim gia tri lon nhat va nho nhat
#include<stdio.h>
#include<conio.h>
main()
{
	int array[1000];
	int i=1,max,min,size;
	for(i=0;i<1000;i++)
	{
		printf(" nhap gia tri cua n%i=",i);
		scanf("%i",&array[i]);
		if(array[i]==0){
			break;
		}
	}
	max=array[0];
	min=0;
	size = sizeof(array)/sizeof(array[0]);
	for(i=1;i<=size;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	printf("\n gia tri lon nhat cua day la max=%i\n gia tri nho nhat cua day la min=%i\n Bam phim bat ki de ket thuc:",max,min);
	getch();
	
}
