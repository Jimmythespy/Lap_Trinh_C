// De bai: Tim so nguyen am va phu am trong mot chuoi
// Y tuong: tao mot 1 chuoi khac chua phu am va su dung con tro
#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	char con[]="ueoai",a[100];
	int i,cons=0,vowl=0,flg;
	char *p;
	printf(" Enter value for str:");
	gets(a);
	p=con[0];
	for(i=0;a[i]!='\0';i++)
	{
		while(flg==0)
		{
			if(a[i]==*p)
		{
			cons++;
			continue;
			flg=1;
		}
		p=p+1;
		}
		vowl++;
	}
	printf(" Vowl: %d\n consonant: %d",vowl,cons);
}
