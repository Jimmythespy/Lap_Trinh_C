/* De bai: nhap vao mot so tu nhien 10<n<100
kiem tra dieu kien tren bang cau truc while do
tinh tong S=1+2+3+...+n
*/

#include <stdio.h>
#include <conio.h>
main()
{
	// Nhap gia tri cua n
	// Bien T
	int n,T,i;
	char ques;
	ques='y';
	do 
	{
		printf(" Nhap so nguyen 10<n<100 : ");
		scanf("%d",&n);
		if(n<=10||n>=100)
	  	{
	  		printf(" gia tri cua n khong hop le");
	  		printf("\n ban co muon nhap lai khong? ");
	  		printf("\n neu co nhap y\n neu khong nhap n\n (y/n) ");
			scanf("%c",&ques);
	  	}
	 }
	// Cau tra loi
	while((n<=10||n>=100)&&(ques!='n'))
	{
		if(ques='n')
		return 0;
	}
	T=0;
	for (i=0;i<n;i++) T=T+i+1;
	printf("\n Tong tu 1 den n la : %d",T);
	getch();
}
