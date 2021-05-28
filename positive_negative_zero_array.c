#include<stdio.h>
int main()
{
int number[5];
int i=0,cnt1=0,cnt2=0,cnt3=0;
for(i=0;i<=4;i++)
{
printf("Enter the number: ");
scanf("%d",&number[i]);

if(number[i]<0)
{
cnt1++;
}

if(number[i]==0)
{
cnt2++;
}

if(number[i]>0)
{
cnt3++;
}
}

printf("negative numbers is %d \n",cnt1);
printf("zero numbers is %d \n",cnt2);
printf("positive numbers is %d \n",cnt3);

return 0;

}

