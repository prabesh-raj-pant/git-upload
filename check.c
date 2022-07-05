#include <stdio.h>
int main()
{
    int i=1,a,b,s;
     while (i<500)
     {
         a=i;
         s=0;
         while (a)
         {
             
             b=a%10;
             s=s+(b*b*b);
             a=a/10;
         }
         if (i==s)
         {
             printf("%d is armstrong number\n",i);
         }
         i++;
         
     }
     
    return 0;
}
