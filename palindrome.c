#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,rev=0,b;
    printf("enter a number\n");
    scanf("%d",&n);
    a=n;
    while (n>0)
    {
        b=n%10;
        rev=rev*10+b;
        n=n/10;
    }
    if (rev==a)
    {
        printf("%d is palindrome",a);       
    }
    else
    {
        printf("%d is not palindrome",a);
    }
getch();
}