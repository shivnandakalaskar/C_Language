#include<stdio.h>
const float pi=3.14;
int main()
{
int l=0,b=0;
int area=0,perimeter=0;
float r=1.0,circum=1.0,a=1.0;

printf("Enter the length and breadth: ");
scanf("%d %d",&l,&b);
printf("Enter the radius of circle:  ");
scanf("%f",&r);

area=l*b;
perimeter=(2*l)+(2*b);
circum=2*pi*r;
a=pi*r*r;

printf("Area 0f  rectangle is %d and perimeter of rectangle is %d \n",area,perimeter);
printf("Circumference of circle is %f \n",circum);
printf("Area of circle is %f \n",a);

return 0;
}
