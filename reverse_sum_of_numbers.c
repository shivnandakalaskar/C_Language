#include<stdio.h>
int main()
{
int no1=300,no2=110,sum=0,i=0;

for(i=no1;i>=no2;i--)
	{
	printf("%d \t",i);
	sum=sum+i;
	}

printf("sum is %d \n",sum);

return 0;

}


