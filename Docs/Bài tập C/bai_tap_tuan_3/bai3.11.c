// De bai: thuc hien phep toan voi hai so phuc
#include<stdio.h>
#include<math.h>
// Khai bao mot bien toan cuc:
int cas=0;
float x,y,z,t;
// Function prototype 3 ham: tong, tich, lay gia tri doi.
int sum(int a,int b)
{
	int X;
	if(cas==1)
	{
		b=-b;
	}
	X=a+b;
	return X;
}
void time(int a,int b,int c,int d)
{
	x=a*c-b*d;
	y=c*b+a*d;
}
void rev(int a,int b)
{
	z=a/(pow(a,2)+pow(b,2));
	t=b/(pow(a,2)+pow(b,2));
}
main()
{
	int ques;
	float a,b,c,d,x,y;
	// (a,b) cho so phuc thu nhat, (c,d) cho so phuc thu hai (x,y) cho gia tri dau ra
	printf(" Nhap gia tri cua so phuc thu nhat (a,b) = ");
	scanf("(%f,%f)",&a,&b);
	printf(" Nhap gia tri cua so phuc thu hai (a,b) = ");
	scanf(" (%f,%f)",&c,&d);
	printf(" Ban muon thuc hien phep toan nao\n 1. Tong: chon 1\n 2. Hieu: chon 2\n 4. Tich: chon 3\n 5. Thuong: chon 4");
	printf("\n Gia tri ban chon: ");
	scanf("%f",&ques);
	if(ques=1)
	{
		x=sum(a,c);
		y=sum(d,b);
		printf(" Gia tri cua so phuc can tim la: (%f,%f)",x,y);
	}
	else if(ques=2)
	{
		cas=1;
		x=sum(a,c);
		y=sum(d,b);	
	}
	else if(ques=3)
	{
		// Can goi len chuong trinh nhung khong can biet truong trinh luu gia tri vao dau
		time(a,b,c,d);
		printf(" Gia tri cua so can tim la (%f,%f)",&x,&y);
	}
	else if(ques=4)
	{
		cas=1;
		rev(c,d);
		time(a,b,z,t);
		printf(" Gia tri cua so can tim la (%f,%f)",&x,&y);
	}
}
