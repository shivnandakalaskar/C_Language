#include<stdio.h>
int main()
{

int i=0,pos=0,sum=0;
printf("Enter last position: ");
scanf("%d",&pos);

for(i=1;i<=pos;i++)
{
printf("%d \t",(i*i)+i);
}

return 0;

}
