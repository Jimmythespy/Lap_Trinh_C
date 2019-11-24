// De bai: gia phuong trinh bac hai ax^2+bx+c=0 cho ca truong hop a=0 va la nghiem phuc;
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c,D; // D lay la biet thuc delta
	float A,B,x1,x2; // Gia tri cua phan ao va phan thuc trong truong hop la nghiem phuc
	printf("\n nhap gia tri he so cau ham bac hai\n (luu y: nhap cac gia tri ngan cach nhau boi dau ',')");
	printf("\n a=");
	scanf("%d",&a);
	printf(" b=");
	scanf("%d",&b);
	printf(" c=");
	scanf("%d",&c);
	D=((b*b)-4*a*c);
	if(a=0)
	{
		x1=(-c/b);
		printf("\n day la phuong trinh bac nhat mot an\n nghiem cua phuong trinh nay la\n x = %f",x1);
		getch();
		return 0;
	}
	if(D<0)
	{
		D=abs(D);
		A=(-b/2*a);
		B=(sqrt(D)/2*a);
		printf("\n phuong trinh khong co nghiem thuc:\n nghiem ao cua phuong trinh nay la\n x1=%f+%f\n x2=%f-%f\n Bam phim bat ky de ket thuc",A,B,A,B);
		getch();
		return 0;
	}
	x1=(((-b)+sqrt(D))/2*a);
	x2=(((-b)-sqrt(D))/2*a);
	printf("\n nghiem cua phuong trinh nay la\n x1=%f\n x2=%f\n Bam phim bat ky de ket thuc",x1,x2);
	getch();
}
