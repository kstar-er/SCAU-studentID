/*��ͨ���ܺ���*/
//������Ҫ���ܺ�����β��ѯ���û��������˵����˳�����//


#include"function.h"
int go_back()
{
    int flag;
    POINT err;
    gotoxy(24,25);
    printf("����1�������˵�������0�˳�����:");        //��ʾ�����//
    while(1)
    {
        err=getset();                               //��õ�ǰλ��//
        super_int_scan(&flag);
        if(flag==1)
        {
            return 1;
        }
        else if(flag==0)
        {
            return 0;
        }
        else                                        //�Ƿ��������û���������//
        {
            error(err);
        }
    }
}
