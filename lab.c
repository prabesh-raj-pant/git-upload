#include<stdio.h>
#include<conio.h>
void main()
{
float x;
printf("Enter the value of x\n");
scanf("%f",&x);
x+= x++ / 2.0;
printf("x=%f\n",x);
x*=--x * x++;
printf("x=%f\n",x);
getch();
}