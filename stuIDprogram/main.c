//**********************//
//*�����������Ǹ�������*//
//**********************//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>





int main()
{
    struct CLASS clarr[10000]={0};      //�����༶�ṹ������//

    welcome();

    start_up(clarr);                     //���ļ��������ļ����ݵ�������//

    menu(clarr);                         //���������򣬼��˵�����//

    close_down(clarr);                   //�ر��ļ��������������ݵ��ļ���//

    outsys();                            //�˳�����ҳ�棬�����û��Ѿ��ɹ��˳�//

    return 0;                           //�������˳�����//
}
