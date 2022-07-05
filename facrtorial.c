#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,b=1;
printf("enter a number\n");
scanf("%d",&n);
while (n>=i)
{
     b=b*i;
     i++;
}
printf("the factorial is %d",b);
getch();


}