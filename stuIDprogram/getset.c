/*��Ҫ���ܺ���*/
//���û�õ�ǰ���λ�ã���POINT����ʽ��������//
#include"function.h"
#include<windows.h>

POINT getset()
{
    HANDLE hOut;
    CONSOLE_SCREEN_BUFFER_INFO scr;
    POINT point;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);        //* ��ȡ��׼������ *//
    GetConsoleScreenBufferInfo(hOut, &scr);
    point.x = scr.dwCursorPosition.X;              //��õ�ǰ���x������//
    point.y = scr.dwCursorPosition.Y;              //��õ�ǰ���y������//
    return point;
}
