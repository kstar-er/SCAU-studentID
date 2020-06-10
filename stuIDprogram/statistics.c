//************//
//主要功能函数//
//************//

//调用以进行统计学生信息操作//

#include"function.h"


int statistics(struct CLASS clarr[])
{

    int op;
    POINT err;
    print_head();
    print_sta_op();                 //打印可统计选项//
    while(1)                        //用户输入选择//
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
        return sta_class_num(clarr);  //统计班级人数//
    case 2:
        return sta_class_sex(clarr);  //统计班级性别比例//
    case 3:
        return sta_total_num(clarr);   //统计总人数//
    case 4:
        return sta_total_sex(clarr);    //统计总性别比例//
    }
    return 1;
}
