/*普通功能函数*/
//该函数用于处理非法输入情况//

#include"function.h"

#pragma comment(lib,"Winmmlib")
void error(POINT point)
{

    PlaySound(TEXT("err.wav"),NULL,SND_FILENAME | SND_ASYNC);


    gotoxy(49,27);
    printf("输入错误，请重试");         //提示栏提示//
    gotoxy(point.x,point.y);
    printf("             ");               //消除上次输入内容//
    gotoxy(point.x,point.y);

}
