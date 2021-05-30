#include<stdio.h>
int main()
{
float ftemp=1.0,celtemp=1.0;

printf("Enter the Temperature in Fahrenheit: ");
scanf("%f",&ftemp);

celtemp=(ftemp-32)/1.8;
printf("Temperature in Celsius is %f \n",celtemp);

return 0;
}
