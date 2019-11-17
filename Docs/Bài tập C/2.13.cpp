// De bai: cho 1 epsilon<1 tinh S=1+1/2+1/3+....+1/(n!)
// dung khi 1/(n!) < epsilon
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float epsilon,i,I,e=0,A=1;
	printf(" gia tri cua epsilon la (epsilon<1)");
	printf("\n epsilon=");
	scanf("%f",&epsilon);
	if(epsilon>=1)
	{
		printf(" gia tri cua epsilon khong hop le");
		return 0;
	}
	else for(i=1;epsilon<(1/A);i++)
		{for(I=1;I<=i;I++) 
			A=A*I; 
		e=e+(1/A);}
	printf(" gia tri cua e la");
	printf("\n e=%f",e);
	getch();
}
