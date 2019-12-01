#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int Sex; // 1 is for bois 2 is for girls.
	int Mid; // Mid terms scores.
	int fin; // Final score.
	int ave; // Average scores.
	int rank;// Studt ranking base on ave
} studt[20];

main()
{
	// Input data for student;
	int i;
	struct student studt[21];
	for(i=0;i<20;i++)
	{
		printf(" Enter value for student %d",i+1);
		printf("\n Enter student name:");             gets(studt[i].name);
		printf("\n Enter student sex:");              scanf("%d",studt[i].Sex);
		printf("\n Enter studnet Mid term score:");   scanf("%d",studt[i].Mid);
		printf("\n Enter studnet Final score:");      scanf("%d",studt[i].fin);
		studt[i].ave=(studt[i].fin+studt[i].Mid)/2;
	}
	// Search for student with a given informations (name) and output the student informations:
	char name4i[20];
	int result,flg=0,istd;
	char ques;
	printf(" Type in the student name: ");
	gets(name4i);
	for(i=0;i<20;i++)
	{
		result=strcmp(name4i,studt[i].name);
		if(result==0)
		{
			break;
			flg=1;
			istd=i;
		}
		else continue;
	}
	if(flg==1) 
	{
		printf(" The %d is the student you are looking for",istd);
		printf(" Do you want to know more info about this student??\n Type Y is yes \n Type N if no\n (Y/N):");
		scanf("%c",ques);
		if(ques=='y')
		{
			printf("\n The student name is %s",studt[istd].name);
			printf("\n The student sex:");
			if(studt[istd].Sex==1) 
				printf(" Boy");
			else 
				printf(" Girls");
			printf(" Student average scores: %d",studt[istd].ave);
		}
	}
	// Rank student base on ave:
	
}
