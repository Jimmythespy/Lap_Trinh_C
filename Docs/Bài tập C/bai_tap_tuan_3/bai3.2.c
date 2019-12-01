// De bai: nhap gia tri cua chuoi va cach tung chu cai boi 1 dau cach theo thu tu nguoc lai
#include<stdio.h>
main()
{
	char array[20];
	int i,len;
	printf(" Input string: ");
	gets(array);
	len=strlen(array);
	for(i=len;i>=0;i--)
	{
			printf("%c ",array[i]);
	}
	printf("\n Press any button to exit!!!");
}
