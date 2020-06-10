

#include "function.h"

void change_class(char later_id[],struct STUDENT *p1,struct CLASS clarr[])
{
    int n,n2;
    struct STUDENT *p2;
    n2=transf(p1->ID);
    n=transf(later_id);                                   //获得学号中的班级编号//
    strcpy(p1->ID,later_id);


    if(p1->last==NULL&&p1->next==NULL)                         //以下内容为将原信息从原班级中删除，使用了del函数的核心功能//
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



    if(clarr[n].tail!=NULL)       //若班级存在至少一个学生，则该学的next指向新添加学生//
    {
        p1->last=clarr[n].tail;   //新添加学生last指针指向上一个学生//
        clarr[n].tail->next=p1;
    }
    if(clarr[n].head==NULL)  //若该班级没有学生，则该班级第一个学生为新添加学生//
    {
        p1->last=NULL;      //头指针的last指针为空//
         clarr[n].head=p1;
    }
    clarr[n].tail=p1;          //班级尾指针指向p1//
    p1->next=NULL;           //清空最后一个位置next指针。//
    clarr[n].num++;
}
