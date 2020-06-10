
#include "function.h"
#pragma comment(lib,"Winmmlib")
void welcome()
{
    int x,y,i;

    PlaySound(TEXT("welcome.wav"),NULL,SND_FILENAME | SND_ASYNC );
    print_head();
    x=46;
    y=8;
    gotoxy(x,++y);
    printf("  ■■■■■■■  ");gotoxy(x,++y);
    printf(" ■            ■  ");gotoxy(x,++y);
    printf("■              ■ ");gotoxy(x,++y);
    printf("■  ■     ■   ■ ");gotoxy(x,++y);
    printf("■ ■■   ■■  ■ ");gotoxy(x,++y);
    printf("■              ■ ");gotoxy(x,++y);
    printf("■   ■    ■   ■         ");gotoxy(x,++y);
    printf(" ■   ■■■   ■   ■■    ");gotoxy(x,++y);
    printf("  ■          ■   ■##■   ");gotoxy(x,++y);
    printf("   ■■■■■■     ■■     ");gotoxy(x,++y);
    printf("      ■■■       ■      ");gotoxy(x,++y);
    printf("■■■■■■■■■■       ");gotoxy(x,++y);
    printf("      ■■■       ");gotoxy(x,++y);
    printf("  欢迎使用本程序  ");




    gotoxy(24,25);
    printf("加载中");


    gotoxy(24,27);
    for(i=24;i<55;i++)
    {
        printf("■");
        Sleep(90);
    }
    gotoxy(24,25);
    printf("加载完毕,按任意建进入程序");


    getch();
    gotoxy(30,30);

}
