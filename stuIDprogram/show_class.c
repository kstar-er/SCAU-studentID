//************//
//��Ҫ���ܺ���//
//************//

//�����Խ��в�ѯ�༶ѧ����Ϣ����//

#include"function.h"
#include <conio.h>

int show_class(struct CLASS clarr[])
{
    int n;
    struct STUDENT *p1;
    POINT err;
    char key_down;

    print_head();
    ask_class();                    //��ӡѯ�ʰ༶��ŵ�ҳ��//
    while(1)
    {
        gotoxy(47,16);
        err=getset();
        if(super_int_scan(&n)==0)         //����༶���//
        {
            return 1;                   //CTRL+z��ֱ�ӷ������˵�//
        }
        if(n<=0||n>=10000)              //�Ƿ���������������//
        {
            error(err);
        }
        else                            //�Ϸ�����������ѭ��//
        {
            break;
        }
    }

    if(clarr[n].head==NULL)             //���ð༶ͷָ��Ϊ��//
    {
        print_head();
        gotoxy(42,12);
        printf("|��ʾʧ�ܣ���û��ѧ����%d��|",n);
        clean_tip();
        return go_back();               //ѯ���û���һ������//
    }
    else
    {
        p1=clarr[n].head;               //p1ָ��༶����ѧ��//

        while(1)
        {
            print_student(*p1);             //��ӡѧ����Ϣ//
            gotoxy(24,25);
            printf("��ʾ�ɹ���%d����Ϣ���ϣ������͡����������",n);  //��ʾ�����//
            err=getset();
            gotoxy(24,26);
            printf("��0�˳�����1�������˵���");
            while(1)
            {
                key_down=getch();               //�������룬ʹ���������ʾ��һ��ѧ��//
                if(key_down==-32)               //��������getch��ȡ�����ʱ��һ�η��ص�ֵ������������֪��Ϊʲô��-32//
                {
                    continue;
                }
                if(key_down==75)
                {
                    if(p1->last!=NULL)
                    {
                        p1=p1->last;
                        clean_tip();                            //�����ʾ��//
                        break;
                    }
                    else
                    {
                        gotoxy(24,27);
                        printf("���ǵ�һλѧ��");
                    }
                }
                else if(key_down==77)
                {
                    if(p1->next!=NULL)
                    {
                        p1=p1->next;
                        clean_tip();                            //�����ʾ��//
                        break;
                    }
                    else
                    {
                        gotoxy(24,27);
                        printf("�������һλѧ��");
                    }
                }
                else if(key_down=='0')
                {
                    return 0;
                }
                else if(key_down=='1')
                {
                    return 1;
                }
                else
                {
                    error(err);
                }
            }
        }
    }
    clean_tip();                            //�����ʾ��//

}
