#include<stdio.h>
int main()
{
int i=0,j=0,pos=0;

printf("Enter the position of rows : ");
scanf("%d",&pos);

for(i=0;i<=pos;i++)
{
printf("\n");
	for(j=0;j<=i;j++)
	{
	printf("$");
	}
}

return 0;

}
