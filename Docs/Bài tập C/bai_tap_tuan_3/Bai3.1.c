// De bai: nhap gia tri cua chuoi va cach tung chu cai boi 1 dau cach
#include<stdio.h>
main()
{
	char array[100];
	int i;
	printf(" Input string: ");
	gets(array);
	for(i=0;array[i]!='\0';i++)
	{
		printf("%c ",array[i]);
	}
	printf("\n Press any button to exit!!!");
}
