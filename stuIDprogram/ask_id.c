/*��ͨ���ܺ���*/

//���ÿ���ֱ�ӻ���û���ѧ���洢���û����ݽ����ĵ�ַ��//

#include "function.h"

int ask_id(char id[])
{
    gotoxy(46,15);                                               //��ӡѯ�ʿ�//
    printf("------------------");
    gotoxy(46,16);
    printf("|");
    gotoxy(63,16);
    printf("|");
    gotoxy(46,17);
    printf("------------------");
    gotoxy(47,16);
    if(super_scan(id)==0)                                      //���û�����ctrl+z��ֱ�ӷ������˵�//
    {
        return 0;
    }
    return 1;
}
