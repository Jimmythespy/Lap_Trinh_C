#include <stdio.h>
#include <conio.h>
 main()
 {
 int n,T,i;
 char ques;
 ques='y';
  do {
  printf(" Nhap so nguyen 10<n<100 : ");
		scanf("%d",&n);
	  if(n<=10||n>=100)
	  {
	  	printf(" gia tri cua n khong hop le");
	  	printf("\n ban co muon nhap lai khong? ");
	  	printf("\n neu co nhap y\n neu khong nhap n\n (y/n) ");
	  	fflush(stdin);
		scanf("%c",&ques);
	  }
	  }
  while((n<=10||n>=100)&&(ques!='n')); 
  if(ques='n')
  	return 0;
  T=0;
  for (i=0;i<n;i++) T=T+i+1;
  printf("\n Tong tu 1 den n la : %d",T);
  getch();
}
