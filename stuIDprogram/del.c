//************//
/*��Ҫ���ܺ���*/
//************//

//�����Խ���ɾ��ѧ����Ϣ����//

#include"function.h"
#pragma comment(lib,"Winmmlib")

int del(struct CLASS clarr[])
{
    char id[20]= {0},flag;
    int n;
    struct STUDENT *p1,*p2;
    POINT err;
    print_head();

    gotoxy(24,25);                                              //��ʾ����ʾ���//
    printf("��������Ҫɾ����ѧ����ѧ�ţ����س�����ȷ����");
    gotoxy(24,27);
    printf("Ctrl+z�������˵�");
    if(ask_id(id)==0)                                              //��ȡѧ��ѧ�ţ�CTRL+Z�������˵�//
    {
        return 1;
    }

    n=transf(id);                                                //��ȡѧ���еİ༶���//
    p1=clarr[n].head;                                            //p1ָ��༶�ڵ�һ��ѧ��//

    while(p1!=NULL)                                             //��ѧ��ѧ�Ž���ƥ���ѯ//
    {
        if(strcmp(p1->ID,id)==0)
        {
            print_student(*p1);
            confirm();                                           //��ѯ�ɹ���ѯ���Ƿ�ɾ��//
            while(1)
            {
                err=getset();                                    //��ȡ��ǰ����㱸��//
                scanf("%c",&flag);                               //�û�����ȷ���������//
                getchar();                                       //�����س�//
                if(flag=='y')                                    //ȷ�Ϻ����ɾ������//
                {
                    PlaySound(TEXT("del.wav"),NULL,SND_FILENAME | SND_ASYNC );
                    if(p1->last==NULL&&p1->next==NULL)                         //���ð༶��ֻ�и�ѧ��//
                    {
                        clarr[n].head=NULL;
                        clarr[n].tail=NULL;
                    }
                    else if(p1->last==NULL)                                 //����ѧ��Ϊ�༶�е�һ����һ��ѧ��//
                    {
                        p2=p1->next;                                       // �����༶ͷָ��//
                        clarr[n].head=p2;                                  //�Ͽ��༶�ڶ���ѧ���͵�һ��ѧ������//
                        p2->last=NULL;
                    }
                    else if(p1->next==NULL)                                 //����ѧ��Ϊ�༶�����һ��ѧ��
                    {
                        p2=p1->last;                                         //�����༶βָ��//
                        clarr[n].tail=p2;                                  //�Ͽ������ڶ�λѧ�������һλѧ������//
                        p2->next=NULL;
                    }
                    else                                                    //����ѧ��Ϊ�༶���м�λ��ѧ��//
                    {
                        p2=p1->next;                                        //��ѧǰ��ѧ����ǰ��ָ�뻥ָ//
                        p2->last=p1->last;
                        p2=p1->last;
                        p2->next=p1->next;
                    }
                    free(p1);                                   //�ͷ�p1ָ���ѧ���ڴ棬�ɹ�ɾ��//
                    clarr[n].num--;                              //�ð༶������һ//

                    return success();                            //���ò����ɹ���������֪�û������ɹ�����ѯ����һ������//
                }
                else if(flag=='n')                                //���û�ȡ���˴β���//
                {
                    return 1;                                     //ֱ�ӷ������˵�//
                }
                else                                               //���������Ƿ�����//
                {
                    error(err);                                     //���ó������������û�������������//
                }
            }
        }
        p2=p1;                                                      //p2ָ��p1��һ��ѧ��//
        p1=p1->next;                                                //p1ָ����һ��ѧ��
    }
    if(p1==NULL)                                                    //���������ѧ�Ŷ�Ӧ�༶���޸�ѧ�����������޴�ѧ�Ŵ���//
    {
        print_head();                                               //��֪�û���ѧ�Ų�����//
        gotoxy(48,16);
        printf("������������������");
        gotoxy(48,18);
        printf("������������������");
        gotoxy(48,17);
        printf("|δ�ҵ���ѧ����Ϣ|");
        clean_tip();
        gotoxy(24,25);
        printf("����1�ٴ�����ѧ�ţ�����0�������˵�:");              //ѯ���û���һ������//
        while(1)
        {
            err=getset();
            scanf("%c",&flag);
            if(flag=='1')                                           //����1�������ɾ�������ٴν���//
            {
                return del(clarr);
            }
            else if(flag=='0')                                      //����0����ֱ�ӷ������˵�//
            {
                return 1;
            }
            else                                                    //�����Ƿ����������û���������//
            {
                error(err);
            }
        }
    }
    return 0;
}


