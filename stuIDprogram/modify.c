//************//
/*��Ҫ���ܺ���*/
//************//

//�����Խ����޸�ѧ����Ϣ����//

#include"function.h"


int modify(struct CLASS clarr[])
{
    char id[20]= {0},op;
    int n;
    struct STUDENT *p1;
    POINT err;
    print_head();

    gotoxy(24,25);
    printf("��������Ҫ�޸���Ϣ��ѧ����ѧ�ţ����س�����ȷ����");     //��ʾ�����//
    gotoxy(24,27);
    printf("Ctrl+z�������˵�");



    if(ask_id(id)==0)                                        //CTRL+z���������˵�//
    {
        return 1;
    }

    n=transf(id);                                                   //��ȡѧ���еİ༶���//
    p1=clarr[n].head;                                               //p1ָ��ð༶��λѧ��//
    while(p1!=NULL)
    {
        if(strcmp(p1->ID,id)==0)                                    //ѧ��ƥ��//
        {
            print_student(*p1);                                     //ƥ��ɹ���ӡѧ����Ϣ//
            print_modify_op();                                      //��ӡ�޸���Ŀѡ��//
            while(1)                                                //�û����޸����ݽ���ѡ��//
            {
                err=getset();
                super_scan(&op);
                if(op>'0'&&op<='8')
                {
                    if(modify_op(op,p1,clarr))                            //�����޸ĺ���ҳ�棬���޸ĳɹ�����1//
                    {
                        print_student(*p1);                         //�޸ĳɹ���ӡ�޸ĺ�ѧ����Ϣ//
                        gotoxy(24,26);
                        printf("���޸ģ��������");                  //��ʾ�����//
                        print_modify_op();                           //�ٴδ�ӡ�޸���Ŀѡ��//
                    }
                    else                                             //���û�ȡ���޸���ֱ�ӷ������˵�//
                    {
                        return 1;
                    }

                }
                else if(op=='0')                                      //�û������ʾֱ�ӷ������˵�//
                {
                    return 1;
                }
                else                                                //�Ƿ����룬���û���������//
                {
                    error(err);
                }
            }
        }
        p1=p1->next;
    }
    if(p1==NULL)                                                //���޸�ѧ����Ϣ�����û�������ʾ//
    {
        print_head();
        gotoxy(48,16);
        printf("������������������");
        gotoxy(48,18);
        printf("������������������");
        gotoxy(48,17);
        printf("|δ�ҵ���ѧ����Ϣ|");


        clean_tip();
        gotoxy(24,25);
        return go_back();                                       //ѯ���û���һ���������������˵������˳�����//
    }
    return 1;
}
