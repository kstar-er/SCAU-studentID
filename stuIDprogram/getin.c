/*��Ҫ���ܺ���*/    //д�뺯��//

//���ý�ѧ����Ϣд��������//

#include "function.h"

void scanin(struct STUDENT a,int n,struct CLASS arr[])  //��ȡ��Ҫ����İ༶��ţ�����Ҫ�����ѧ����Ϣ���༶�����ַ//
{
    struct STUDENT *p2;

    p2=(struct STUDENT*)malloc(sizeof(struct STUDENT));
    *p2=a;                                                  //��ֵ��p2��ָ��Ŀռ�//

    if(arr[n].tail!=NULL)       //���༶��������һ��ѧ�������ѧ��nextָ�������ѧ��//
    {
        p2->last=arr[n].tail;   //�����ѧ��lastָ��ָ����һ��ѧ��//
        arr[n].tail->next=p2;
    }
    if(arr[n].head==NULL)  //���ð༶û��ѧ������ð༶��һ��ѧ��Ϊ�����ѧ��//
    {
        p2->last=NULL;      //ͷָ���lastָ��Ϊ��//
         arr[n].head=p2;
    }
    arr[n].tail=p2;          //�༶βָ��ָ��p2//
    p2->next=NULL;           //������һ��λ��nextָ�롣//
}
