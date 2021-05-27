#include<stdio.h>
int main()
{
int nu[5];
int i=0,sum=0;
float avg=0.1;

for(i=0;i<=4;i++)
{
printf("Enter the number: ");
scanf("%d",&nu[i]);
sum=sum+nu[i];
}
avg=sum/5;

printf("sum of arrays is %d \n",sum);
printf("average of arrays is %f \n",avg);

return 0;

}
