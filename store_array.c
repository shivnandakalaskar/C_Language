#include<stdio.h>
int main()
{
int nu[5];
int i=0;

printf("Enter the number of elements: ");
for(i=0;i<=4;i++)
{
scanf("%d",&nu[i]);
}
	for(i=0;i<=4;i++)
	{
	printf("%d is stored at %d location of an array element \n",nu[i],i);
	}
	
return 0;

}
