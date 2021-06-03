#include<stdio.h>
int main()
{
int i=0;
char str[12];

printf("Enter a String: ");
scanf("%s",str);

while(str[i]!='\0')

{
i++;
}

printf("String length of %s is %d \n",str,i);

return 0;

}

