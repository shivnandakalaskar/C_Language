#include<stdio.h>
int main()
{
int i=0,j=0,pos=0;
printf("Enter the position of rows : ");
scanf("%d",&pos);
for (i=1;i<=pos;i++)
{
printf("\n");
	for (j=1;j<=i;j++)
	{
	printf("%d \t",i);
	}
}
printf("\n");
return 0;
}
