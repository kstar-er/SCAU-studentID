//开场动画函数//

#include "function.h"


void welcome()
{

    int i,j;

    print_head();

    gotoxy(25,18);
    for(j=0; j<5; j++)
    {
        printf("*");
    }
    for(i=25; i<80; i++)
    {
        gotoxy(i,18);
        printf(" ");
        gotoxy(i+5,18);
        printf("*");
        Sleep(30);
    }
    Sleep(1000);
}
