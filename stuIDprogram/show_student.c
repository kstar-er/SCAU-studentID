//************//
//��Ҫ���ܺ���//
//************//

//�����Խ��в�ѯѧ����Ϣ����//

#include"function.h"


int show_student(struct CLASS clarr[])
{
    char id[20]= {0};
    int flag;
    int n;
    struct STUDENT *p1;
    POINT err;
    print_head();                                                 //��ӡ�ֳ�����//

    gotoxy(24,25);
    printf("��������Ҫ��ѯ��ѧ����ѧ�ţ����س�����ȷ����");       //��ʾ�����//
    gotoxy(24,27);
    printf("Ctrl+z�������˵�");

    if(ask_id(id)==0)                                     //����ѧ�Ŵ����ڱ���id��//
    {
        return 1;                                               //��ΪCTRL+zֱ�ӷ������˵�//
    }

    n=transf(id);
    p1=clarr[n].head;                                            //p1ָ��༶����ѧ��//
    while(p1!=NULL)
    {
        if(strcmp(p1->ID,id)==0)                                 //����ƥ���ѧ��//
        {
            print_student(*p1);
            clean_tip();                                          //�����ʾ��//
            gotoxy(24,27);
            printf("��ѯ�ɹ���");                                  //��ʾ�����//
            gotoxy(24,25);
            printf("����2�ٴβ�ѯ������1�������˵�,����0�˳�ϵͳ:");
            while(1)
            {
                err=getset();
                super_int_scan(&flag);                                 //����ѡ��//

                if(flag==2)
                {
                    return show_student(clarr);                   //2�����µ��ò�ѯ����//
                }
                else if(flag==1)
                {
                    return 1;                                     //1�򷵻����˵�//
                }
                else if(flag==0)
                {
                    return 0;                                     //0���˳�����//
                }
                else
                {
                    error(err);                                   //�Ƿ�������ʾ����Ҫ���û���������//
                }
            }
            return 1;

        }
        p1=p1->next;                                              //ѭ����ָ����һ��ѧ��//
    }
    if(p1==NULL)                                                  //ѭ��û���ҵ�//
    {
        print_head();
        gotoxy(48,16);
        printf("������������������");
        gotoxy(48,18);
        printf("������������������");
        gotoxy(48,17);
        printf("|δ�ҵ���ѧ����Ϣ|");                              //��֪�û��Ҳ���//
        clean_tip();
        return go_back();                                     //ѯ������һ������//
    }
    return 1;
}
