//*************/
/*��Ҫ���ܺ���*/
//************//

//�ṩ�˵�ҳ��//
//����������ת������//

#include"function.h"
#include <windows.h>
#pragma comment(lib,"Winmmlib")



void menu(struct CLASS clarr[])
{
    PlaySound(TEXT("menu.wav"),NULL,SND_FILENAME | SND_ASYNC );
    int flag=1;
    char op;
    POINT r,l,err;
    POINT point;
    l.x=32;
    r.x=61;
    while(1)
    {
        if(flag==1)
        {
            print_head();
        }
        gotoxy(l.x,11);
        printf("|1:¼��ѧ����Ϣ|");       //��ӡ�˵���Ϣ//
        gotoxy(r.x,11);
        printf("|2:�޸�ѧ����Ϣ|");
        gotoxy(l.x,15);
        printf("|3:ɾ��ѧ����Ϣ|");
        gotoxy(r.x,15);
        printf("|4:��ʾ�༶��Ϣ|");
        gotoxy(l.x,19);
        printf("|5:��ʾѧ����Ϣ|");
        gotoxy(r.x,19);
        printf("|6:ͳ����Ϣ����|");
        gotoxy(24,27);
        printf("�˳�������0��");

        gotoxy(24,25);
        printf("����ݲ˵�ǰ�����������ѡ������Ҫ�Ĵ˲���:");  //��ʾ�����//
        point=getset();                                         //��¼��ǰλ��//
        gotoxy(point.x,point.y);

        while(1)
        {
            err=getset();
            scanf("%c",&op);
            if(op>='0'&&op<='6')
            {
                break;
            }
            else
            {
                error(err);
            }
        }
        getchar();

        flag=switchop(op,clarr,point);                          //��¼����������Ҫ�����ĺ����ķ���ֵ//
        if(flag==0)                                             //������ֵΪ0�����û���Ҫ�˳�����//
        {
            break;
        }                                                       //��������ڲ˵�������ѭ��//
    }

}                                                               //û�з���ֵ��ֱ�ӻص�������//
