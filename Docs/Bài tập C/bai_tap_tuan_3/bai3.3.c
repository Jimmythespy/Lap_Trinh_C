// De bai: Dem so tu co trong mot chuoi
#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	char a[100];
	int wrd=1,i,len;
	printf(" Enter string: ");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(isspace(a[i]))
		{
			wrd=wrd+1;
		}
	}
	printf(" The amount of word in this string is: %d",wrd);
}
