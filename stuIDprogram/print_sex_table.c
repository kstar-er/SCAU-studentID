//**********************//
/*��Ҫ���ܺ����Ĵμ�����*/
//**********************//

//�����Դ�ӡѧ���Ա�ͳ�Ƶı��//

#include "function.h"

void print_sex_table()
{
    int i,j;

    for(i=14; i<=22; i++)                   //��ӡ�����//
    {
        for(j=45; j<=66; j+=7)
        {
            gotoxy(j,i);
            printf("|");
        }
    }
    for(i=14; i<=22; i+=2)
    {
        gotoxy(46,i);
        printf("��������������������");
    }


    gotoxy(53,15);                          //��ӡ�����Ŀ//
    printf(" ����");
    gotoxy(60,15);
    printf(" ռ��");
    gotoxy(46,17);
    printf(" ����");
    gotoxy(46,19);
    printf(" Ů��");
    gotoxy(46,21);
    printf(" ����");




}
