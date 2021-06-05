#include<stdio.h>
int main()
{
char str[15];
int i=0,j=1;

printf("\n Enter string: ");
scanf("%s",str);
while(str[i]!='\0')
{
i++;
}
printf("\nEntered reverse string is ");
for(j=i;j>=0;j--)
{
printf("%c",str[j]);
}
return 0;

}
