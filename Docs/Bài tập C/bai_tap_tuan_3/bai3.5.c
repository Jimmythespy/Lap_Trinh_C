// De bai: Copy noi dung cua mot string vao mot string khac
#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	char str1[100], str2[100];
	printf(" Enter the value for string 1 say i love you 3000: ");
	gets(str1);
	printf(" Now lets copy str1 to str2");
	getch();
	strcpy(str2, str1);
	printf("\n The value in str2 now is:");
	puts(str2);
	getch();
	printf(" Now lets see how mr.Stark response, by changing the str 1");
	getch();
	strcpy(str2,"\n No I love you more :)");
	puts(str2);
}
