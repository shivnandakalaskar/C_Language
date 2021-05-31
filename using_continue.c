#include<stdio.h>
int main()
{
int i=0,j=0;
for(i=1;i<=2;i++)
{
	for(j=1;j<=2;j++)
	{
	if(i==j)
	continue;
	printf("%d %d \n",i,j);
	}
}

return 0;

}
