/*����Ҫ���ܺ���*/

//�ƶ���꣬���������ȫ������//


#include "function.h"
#include <windows.h>

void gotoxy(int x,int y)
{
    COORD p={x,y};      //������Ŀ���ƶ�λ�ô��ݸ��ṹ��//
    HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);  //��ȡ��ǰ�������//
    SetConsoleCursorPosition(handle,p); //�ƶ����//
}

