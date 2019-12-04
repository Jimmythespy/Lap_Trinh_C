/* Nhap mot so tu 1 den 9
** xuat ra gia tri cua so duoc nhap duoi dang chu
*/
#include<stdio.h>
#include<conio.h>

main()
{
	// Nhap gia tri cua so
	int n;
	// Bien cau hoi
	char ques; 
	// Bien co: su dung cho cau tra loi 
	int flag=0;
	printf("\n nhap mot so 0<n<10");
	printf("\n n=");
	scanf("%d",&n);
	// Kiem tra dieu kien cua so nhap vao
	while(n>10||n<0)
	{
		printf(" So nhap khong hop le");
		printf("\n Ban co muon nhap lai");
		printf("\n Y/N :");
		scanf("%c",&ques);
		// Cau tra loi co
		if(ques='Y')
		{
			flag=1;
		}
		// Cau tra loi khong
		else if(ques='N')
		{
			break;
		}
	}
	// Neu tra loi co va n thoa man dieu kien
	if(flag==1)
	{
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
	}
	getch();
}
