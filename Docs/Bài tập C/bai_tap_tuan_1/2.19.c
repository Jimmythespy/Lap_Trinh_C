// De bai: nhap du lieu dau vao 0<n<1000 dung While or do while de kiem tra dieu kien cua n
// tinh tong cac chu so cua n
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int t,n,sum=0,remainder; // remainder phan du
	printf(" Nhap gia tri cua n nguyen (n<1000):\n n= "); 
	scanf("%d",&n);
	char *ques; 
	ques="y"; // Bien cau hoi
	while((n>=10000||n<=0)&&(ques="y"))
	{
		printf("\n gia tri cua n khong hop le\n Ban co muon nhap lai khong?\n (y/n):");
		scanf("%s",&ques);
	// Ung voi cau tra loi khong
	if(ques='n') // 
	{ 
		printf("\n Bam phim bat ki de ket thuc:"); return 0;	}
	} 
	// Tinh tong cac chua so
	t = n;
	while (t != 0) 
	{
		remainder = t % 10;
      		sum = sum + remainder; 
      		t = t / 10;
	}
	printf(" tong cua cac chu so cua %d=%d",n,sum);      
}
