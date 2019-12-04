/* DE BAI: Tinh gia tri cua pi
** giua tren gia tri cua epsilon
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i;
	float pi=0,e; // Nhap gia tri cua epsilon
	printf(" nhap gia tri cua epsilon (0<epsilon<1)\n epsilon=");
	scanf("%f",&e);
	if(e>1||e<0)
	{
		printf(" gia tri cua epsilon khong hop le\n Bam phim bat ky de ket thuc:");
		return 0;
		}
	// Vong lap de tinh pi
	do
	{
		i=1;
		pi=pi+(pow(-1,i)*(1/2*i+1));
		}while((i/(2*i+1))<=e);
	pi=pi/4;
	printf("\n gia tri cua pi=%f",pi);
	getch();
}
