//**********************//
/*��Ҫ���ܺ����Ĵμ�����*/
//**********************//

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


int sta_total_sex(struct CLASS clarr[])
{
    int i;
    double sum=0;
    char t='%';
    char boy[10]="boy",girl[10]="girl";
    char boy2[10]="��",girl2[10]="Ů";
    struct STUDENT *p1;
    NUM sta= {0};

    for(i=1; i<10000; i++)                                      //�����༶�ṹ������//
    {
        if(clarr[i].head!=NULL)
        {
            sum+=clarr[i].num;                                  //�ۼư༶�����������������//
            p1=clarr[i].head;
            while(p1!=NULL)                                     //ÿ���༶�����Ա������ۼ�//
            {
                if(strcmp(p1->sex,boy)==0||strcmp(p1->sex,boy2))
                {
                    sta.boy++;
                }
                else if(strcmp(p1->sex,girl)==0||strcmp(p1->sex,girl2))
                {
                    sta.girl++;
                }
                else
                {
                    sta.other++;
                }
                p1=p1->next;
            }


        }
    }


    print_head();
    gotoxy(42,12);
    printf("ͳ�Ƴɹ������Ա��������");

    sta.proboy=sta.boy/sum;                         //���ݴ�������Ա�ռ��//
    sta.progirl=sta.girl/sum;
    sta.proother=sta.other/sum;

    print_sex_table();                              //��ӡͳ�Ʊ��//

    gotoxy(53,17);                                  //���ͳ������//
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

    return go_back();                           //ѯ����һ������//


}
