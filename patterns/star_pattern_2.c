#include<stdio.h>
int main()
{

int i=0,j=0,pos=0,space=0;
printf("Enter the position of rows : ");
scanf("%d",&pos);
for(i=1;i<=pos;i++)
{	
	printf("\n");
	for(space=1;space<=(pos-i);space++)
	{
	printf(" ");
	}
	for(j=1;j<=(2*i)-1;j++)
	{
	printf("*");
	}

}

return 0;
}
