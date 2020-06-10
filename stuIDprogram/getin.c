/*重要功能函数*/    //写入函数//

//调用将学生信息写入链表中//

#include "function.h"

void scanin(struct STUDENT a,int n,struct CLASS arr[])  //获取需要输入的班级编号，，需要输入的学生信息，班级数组地址//
{
    struct STUDENT *p2;

    p2=(struct STUDENT*)malloc(sizeof(struct STUDENT));
    *p2=a;                                                  //赋值给p2所指向的空间//

    if(arr[n].tail!=NULL)       //若班级存在至少一个学生，则该学的next指向新添加学生//
    {
        p2->last=arr[n].tail;   //新添加学生last指针指向上一个学生//
        arr[n].tail->next=p2;
    }
    if(arr[n].head==NULL)  //若该班级没有学生，则该班级第一个学生为新添加学生//
    {
        p2->last=NULL;      //头指针的last指针为空//
         arr[n].head=p2;
    }
    arr[n].tail=p2;          //班级尾指针指向p2//
    p2->next=NULL;           //清空最后一个位置next指针。//
}
