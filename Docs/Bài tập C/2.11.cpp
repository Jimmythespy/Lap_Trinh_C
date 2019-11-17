#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("\n nhap mot so 0<n<10");
	printf("\n n=");
	scanf("%d",&n);
	printf("\n so nhap la so");
	switch (n)
	{
		case 1: printf(" mot"); break;
		case 2: printf(" hai");break;
		case 3: printf(" ba");break;
		case 4: printf(" bon");break;
		case 5: printf(" nam");break;
		case 6: printf(" sau");break;
		case 7: printf(" bay");break;
		case 8: printf(" tam");break;
		case 9: printf(" Chin"); break;
		default: printf(" khong hop le");
	}
	getch();
}
