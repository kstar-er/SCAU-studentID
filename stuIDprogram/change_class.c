

#include "function.h"

void change_class(char later_id[],struct STUDENT *p1,struct CLASS clarr[])
{
    int n,n2;
    struct STUDENT *p2;
    n2=transf(p1->ID);
    n=transf(later_id);                                   //���ѧ���еİ༶���//
    strcpy(p1->ID,later_id);


    if(p1->last==NULL&&p1->next==NULL)                         //��������Ϊ��ԭ��Ϣ��ԭ�༶��ɾ����ʹ����del�����ĺ��Ĺ���//
    {
        clarr[n2].head=NULL;
        clarr[n2].tail=NULL;
    }
    else if(p1->last==NULL)
    {
        p2=p1->next;
        clarr[n2].head=p2;
        p2->last=NULL;
    }
    else if(p1->next==NULL)
    {
        p2=p1->last;
        clarr[n2].tail=p2;
        p2->next=NULL;
    }
    else
    {
        p2=p1->next;
        p2->last=p1->last;
        p2=p1->last;
        p2->next=p1->next;
    }
    clarr[n2].num--;



    if(clarr[n].tail!=NULL)       //���༶��������һ��ѧ�������ѧ��nextָ�������ѧ��//
    {
        p1->last=clarr[n].tail;   //�����ѧ��lastָ��ָ����һ��ѧ��//
        clarr[n].tail->next=p1;
    }
    if(clarr[n].head==NULL)  //���ð༶û��ѧ������ð༶��һ��ѧ��Ϊ�����ѧ��//
    {
        p1->last=NULL;      //ͷָ���lastָ��Ϊ��//
         clarr[n].head=p1;
    }
    clarr[n].tail=p1;          //�༶βָ��ָ��p1//
    p1->next=NULL;           //������һ��λ��nextָ�롣//
    clarr[n].num++;
}
