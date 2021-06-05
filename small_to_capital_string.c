#include<stdio.h>
int main()
{
int i=0,j=1;
char str[15];

printf("\n Entered the string: ");
scanf("%s",str);

while(str[i]!='\0')
{
	if(str[i]>=97 && str[i]<=122)
	{
	str[i]=str[i]-32;
	}
	
	else if(str[i]>=65 && str[i]<=90)
	{
	str[i]=str[i]+32;
	}
	i++;
}
printf("Converted String is %s \n",str);

return 0;

}	

