/*重要功能函数*/
//调用获得当前光标位置，以POINT的形式返回坐标//
#include"function.h"
#include<windows.h>

POINT getset()
{
    HANDLE hOut;
    CONSOLE_SCREEN_BUFFER_INFO scr;
    POINT point;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);        //* 获取标准输出句柄 *//
    GetConsoleScreenBufferInfo(hOut, &scr);
    point.x = scr.dwCursorPosition.X;              //获得当前光标x轴坐标//
    point.y = scr.dwCursorPosition.Y;              //获得当前光标y轴坐标//
    return point;
}
