/* DE BAI: tinh gia tri gia thua cua so so nguyen duong bat ky
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	// Nhap gia tri cua so nguyen a
	// Gia thua la S
	// i la bien dieu khien
	int a,S=1,i;
	printf(" Nhap gia tri cua a trong bieu thuc n!");
	printf("\n Gia tri cua a=");
	scanf("%d",&a);
	// Kiem tra dieu kien cua a, a>0
	if(a<0)
	{
		printf("\n n Khong hop le");
		return 0;
	}
	else
	// Tinh gia tri cua gia thua
	for(i=1;i<a;i++)
		S=S*i;
	printf("\n gia tri cua S=%d",S);
	getch();
}

