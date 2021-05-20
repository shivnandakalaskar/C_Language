#include<stdio.h>
int main()
{
int i=0,j=0,pos=0,k=65;
printf("Enter the position of rows : ");
scanf("%d",&pos);
for (i=1;i<=pos;i++)
{
	for (j=1;j<=pos;j++)
	{
	printf("%c",k);		
	}
	k++;
	printf("\n");
}
return 0;
}

