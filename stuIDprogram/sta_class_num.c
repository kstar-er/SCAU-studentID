//**********************//
/*��Ҫ���ܺ����Ĵμ�����*/
//**********************//

//������ͳ��һ���༶������//

#include "function.h"


int sta_class_num(struct CLASS clarr[])
{
    int n,i;
    POINT err;
    ask_class();                        //��ӡѯ�ʰ༶���ҳ��//
    while(1)                            //����༶���//
    {
        gotoxy(47,16);
        err=getset();
        if(super_int_scan(&n)==0)
        {
            return 1;                   //CTRL+z��ֱ�ӷ������˵�//
        }
        if(n<=0||n>=10000)
        {
            error(err);                 //�Ƿ���������������//
        }
        else
        {
            break;                      //�Ϸ�����������ѭ��//
        }
    }

    print_head();
    gotoxy(44,12);
    printf("ͳ�Ƴɹ���%d���������Ϊ:",n);

    gotoxy(44,15);                          //��ӡͳ�������//
    printf("|");
    gotoxy(67,15);
    printf("|");

    for(i=14; i<=16; i+=2)
    {
        gotoxy(44,i);
        printf("������������������������");
    }
    gotoxy(45,15);

    printf("%d",clarr[n].num);              //���ͳ�ƽ�������ֱ���ڰ༶�ṹ����//
    return go_back();                      //ѯ���û���һ������//


}
