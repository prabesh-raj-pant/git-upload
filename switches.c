#include <stdio.h>
#include <conio.h>
void main()
{
    char a;
    printf("enter a character\n");
    scanf("%c", &a);
    switch (a)
    {
    case 'R':
        printf("RED");
        break;
    case 'B':
        printf("BLUE");
        break;
    case 'G':
        printf("GREEN");
        break;
            case 'r':
        printf("RED");
        break;
    case 'b':
        printf("BLUE");
        break;
    case 'g':
        printf("GREEN");
        break;
    default:
        printf("BLACK");
        break;
    }

    getch();
}