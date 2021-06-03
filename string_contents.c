#include<stdio.h>
int main()
{

char str[20]="Welcome to tech-Max";
int i=0;

printf("Entered String is %s",str);

printf("Valued stored at location are: ");

for(i=0;i<=19;i++)
{
printf("str[%d]=%c \n",i,str[i]);
}

return 0;

}

