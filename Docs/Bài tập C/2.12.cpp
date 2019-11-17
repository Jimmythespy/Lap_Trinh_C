#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	int a,S=1,i;
	fflush(stdin);
	printf("\t-Nhap gia tri cua a trong bieu thuc n!");
	printf("\n\t-Gia tri cua a=");
	scanf("%d",&a);
	if(a>8)
	{
		printf("\n\t-n Khong hop le");
		return 0;
		getch();
	}
	else
	for(i=1;i<a;i++)
		S=S*i;
	printf("\n\t-gia tri cua S=%d",S);

	getch();
}

