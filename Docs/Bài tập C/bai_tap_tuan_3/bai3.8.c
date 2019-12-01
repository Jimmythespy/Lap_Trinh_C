// De bai: tim chu cai xuat hien nhieu nhat trong chuoi 
// Y tuong tao mot mang co 255 gia tri, doi gia tri chua cai sang so trong bang ma ASCII 
#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	printf(" Nhap gia tri cua chuoi: ");
	gets(a);
	int array[255];
	int i,max,num,temp;
	for(i=0;i<255;i++)
	{
		array[i]=0;
	}
	while(a[i]!='\0')
	{
		num=(int)a[i];
		array[num]+=1;
		i++;
	}
	max=0;
	for(i=0;i<255;i++)
	{
		if(array[i]>max) max=array[i];
		i=temp;
	}
	printf(" Ki tu cuat hien nhieu nhat trong mang la: %c\n So lan lap lai: %d",(char)temp,array[temp]);
	getch();
}
