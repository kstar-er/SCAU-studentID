//**********************//
/*��Ҫ���ܺ����Ĵμ�����*/
//**********************//
#include "function.h"

int sta_total_num(struct CLASS clarr[])
{

    int i;
    int sum=0;
    print_head();
    gotoxy(44,12);
    printf("ͳ�Ƴɹ���������Ϊ:");

    gotoxy(44,15);                              //��ӡͳ�ƽ�������//
    printf("|");
    gotoxy(67,15);
    printf("|");
    for(i=14; i<=16; i+=2)
    {
        gotoxy(44,i);
        printf("������������������������");
    }
    gotoxy(45,15);


    for(i=1;i<10000;i++)                    //�����༶�ṹ����//
    {
        if(clarr[i].head!=NULL)
        {
            sum+=clarr[i].num;              //�������а༶����һ������ۼ�//
        }
    }
    printf("%d",sum);                     //���ͳ�ƽṹ//
    return go_back();
}
