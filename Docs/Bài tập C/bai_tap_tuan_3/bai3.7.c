#include<stdio.h>
#include<string.h>
main()
{
	char a1[100],a2[100];
	printf(" What would you say to propose to her: ");
	gets(a1); 
	printf(" How would she says in response: ");
	gets(a2);
	if(strcmp(a1,a2)>0) printf("\n You said more than she said :)");
	else if(strcmp(a1,a2)<0) printf("\n She said more than you :)))))");
	else printf(" You guys are a match congrat :)");
	getch();
	printf("\n This is how it will look like if you say both");
	puts(strcat(a1,a2));
}
