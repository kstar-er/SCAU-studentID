//**********************//
/*��Ҫ���ܺ����Ĵμ�����*/
//**********************//

//������ͳ�ư༶����Ů����//

#include "function.h"

typedef struct
{
    int boy;
    int girl;
    double proboy;
    double progirl;
    double proother;
    int other;
} NUM;

int sta_class_sex(struct CLASS clarr[])
{

    int n;
    char t='%';
    char boy[10]="boy",girl[10]="girl";
    char boy2[10]="��",girl2[10]="Ů";
    POINT err;

    struct STUDENT *p1;
    NUM sta= {0};
    ask_class();
    while(1)
    {

        gotoxy(47,16);
        err=getset();
        if((super_int_scan(&n))==0)
        {
            return 1;
        }
        if(n<0||n>=10000)
        {
            error(err);
        }
        else
        {
            break;
        }
    }
                                     //��������ͬͳ�ư༶��������//

    if(clarr[n].head==NULL)                         //���ð༶��û����//
    {
        gotoxy(42,12);
        printf("|ͳ��ʧ�ܣ���û��ѧ����%d��|",n);
        return go_back();                           //ѯ���û���һ������//
    }
    else
    {
        p1=clarr[n].head;
        print_head();
        gotoxy(42,12);
        printf("ͳ�Ƴɹ���%d����Ա��������",n);    //�༶������//

        while(p1!=NULL)                             //ѭ�������༶����//
        {
            if(strcmp(p1->sex,boy)==0||strcmp(p1->sex,boy2)==0)              //���Ա�����бȶ�//
            {
                sta.boy++;                             //�ȶԳɹ�����ͳ�����ݱ����м�1//
            }
            else if(strcmp(p1->sex,girl)==0||strcmp(p1->sex,girl2)==0)
            {
                sta.girl++;
            }
            else
            {
                sta.other++;
            }
            p1=p1->next;
        }

        sta.proboy=sta.boy/(clarr[n].num*1.0);               //���ݴ��������ռ����//
        sta.progirl=sta.girl/(clarr[n].num*1.0);
        sta.proother=sta.other/(clarr[n].num*1.0);

        print_sex_table();                                    //��ӡͳ�Ʊ��//
        gotoxy(53,17);                                        //���ͳ�ƽ��//
        printf("%d",sta.boy);
        gotoxy(60,17);
        printf("%.1lf%c",sta.proboy*100,t);
        gotoxy(53,19);
        printf("%d",sta.girl);
        gotoxy(60,19);
        printf("%.1f%c",sta.progirl*100,t);
        gotoxy(53,21);
        printf("%d",sta.other);
        gotoxy(60,21);
        printf("%.1f%c",sta.proother*100,t);

        return go_back();
    }

}
