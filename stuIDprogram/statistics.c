//************//
//��Ҫ���ܺ���//
//************//

//�����Խ���ͳ��ѧ����Ϣ����//

#include"function.h"


int statistics(struct CLASS clarr[])
{

    int op;
    POINT err;
    print_head();
    print_sta_op();                 //��ӡ��ͳ��ѡ��//
    while(1)                        //�û�����ѡ��//
    {
        err=getset();
        if(super_int_scan(&op)==0)
        {
            return 1;
        }
        else if(op>=1&&op<=4)
        {
            break;
        }
        else
        {
            error(err);
        }
    }

    switch(op)
    {
    case 1:
        return sta_class_num(clarr);  //ͳ�ư༶����//
    case 2:
        return sta_class_sex(clarr);  //ͳ�ư༶�Ա����//
    case 3:
        return sta_total_num(clarr);   //ͳ��������//
    case 4:
        return sta_total_sex(clarr);    //ͳ�����Ա����//
    }
    return 1;
}
