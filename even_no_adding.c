#include<stdio.h>
int main()
{
int i=0,num=0,sum=0;
printf("Enter last position: ");
scanf("%d",&num);

for(i=1;i<=num;i++)
{
	if(i%2==0)
	{
	sum=sum+i;
	printf("%d \t ",i);
	}
}

printf("\n sum is%d \n",sum);

 return 0;
}
