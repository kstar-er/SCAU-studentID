/*��Ҫ�������ܺ���*/

//���Լ�������Ƿ�Ϊ�գ�����û�ж���Ļس�������������ʹ����ϸ��������ݽ����ĵ�ַ��//

#include "function.h"

int super_scan(char temp[])
{
    char t;
    int i=0;
    POINT p;
    p=getset();
    while(1)
    {
        if((t=getchar())==EOF)
        {
            return 0;
        }
        if(t=='\n'&&i==0)
        {
            gotoxy(24,26);
            printf("���벻��Ϊ��");
            gotoxy(p.x,p.y);
        }
        else if(t=='\n')
        {
           break;
        }
        else
        {
            temp[i++]=t;
        }
    }
    return 1;
}

