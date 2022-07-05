#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float b,c,d,g;
    printf("enter b,c&d respectively\n");
    scanf("%f%f%f",&b,&c,&d);
    g=c*pow(b,3)/pow(d,2);
    printf("the answer is %.2f",g);
    getch();

}