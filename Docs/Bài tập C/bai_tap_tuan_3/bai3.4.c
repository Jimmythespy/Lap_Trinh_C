#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
main()
{
	int i,wrd=1,num=0,spc=0,chr=0,spec=0,len;
	char str[100];
	printf(" Enter value for string:");
	gets(str);
	len=strlen(str);
	for(i=0;i>len;i++)
	{
		if(isspace(str[i])!=0)
			{
				spc++; wrd++;
			}
		else if(isdigit(str[i])!=0)
			num++;
		else if(isalpha(str[i])!=0)
			chr++;
		else spec++;
	}
	printf(" The number of:\n\t Word is: %d \n\t Space is: %d \n\t Character is: %d \n\t Number is %d\n\t Special character: %d ",wrd,spc,chr,num,spec);
	getch();
}
