/*普通功能函数*/

//退出页面，告诉用户已经成功退出//

#include"function.h"
#pragma comment(lib,"Winmmlib")

void outsys()
{
    PlaySound(TEXT("close.wav"),NULL,SND_FILENAME | SND_ASYNC );
    int x,y,i;
    print_head();
    x=46;
    y=8;
    gotoxy(x,++y);
    printf("  ■■■■■■■  ");gotoxy(x,++y);Sleep(80);
    printf(" ■            ■  ");gotoxy(x,++y);Sleep(80);
    printf("■              ■ ");gotoxy(x,++y);Sleep(80);
    printf("■  ■     ■   ■ ");gotoxy(x,++y);Sleep(80);
    printf("■ ■■   ■■  ■ ");gotoxy(x,++y);Sleep(80);
    printf("■              ■ ");gotoxy(x,++y);Sleep(80);
    printf("■   ■    ■   ■ ");gotoxy(x,++y);Sleep(80);
    printf(" ■   ■■■   ■  ");gotoxy(x,++y);Sleep(80);
    printf("  ■          ■   ");gotoxy(x,++y);Sleep(80);
    printf("   ■■■■■■    ");gotoxy(x,++y);Sleep(80);
    printf("      ■■■       ");gotoxy(x,++y);Sleep(80);
    printf("■■■■■■■■■ ");gotoxy(x,++y);Sleep(80);
    printf("      ■■■       ");gotoxy(x,++y);Sleep(80);
    printf("  感谢使用本程序  ");


    gotoxy(24,25);
    printf("已成功退出，按任意键继续");



i=1;
while(!_kbhit())
{

    i++;
    x=64;y=15;
    gotoxy(x,++y);
    printf("  ■■");gotoxy(x,++y);
    printf(" ■##■");gotoxy(x,++y);
    printf("  ■■");gotoxy(x,++y);
    printf(" ■");gotoxy(x,++y);
    printf("■");gotoxy(x,++y);
    Sleep(200);
    x=64;y=15;
    gotoxy(x,++y);
    printf("      ");gotoxy(x,++y);
    printf("       ");gotoxy(x,++y);
    printf("     ");gotoxy(x,++y);
    printf("   ");gotoxy(x,++y);
    printf("  ");gotoxy(x,++y);

    x=64;y=17;
    gotoxy(x,++y);
    printf("     ■■");gotoxy(x,++y);
    printf("■■■##■");gotoxy(x,++y);
    printf("     ■■");gotoxy(x,++y);
    Sleep(200);

     x=64;y=17;
    gotoxy(x,++y);
    printf("         ");gotoxy(x,++y);
    printf("          ");gotoxy(x,++y);
    printf("         ");gotoxy(x,++y);

    if(i==100)
    {
        break;
    }
}


    x=64;y=17;
    gotoxy(x,++y);
    printf("     ■■");gotoxy(x,++y);
    printf("■■■##■");gotoxy(x,++y);
    printf("     ■■");gotoxy(x,++y);
    getch();
    gotoxy(30,30);

}
