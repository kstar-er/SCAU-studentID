//**********************//
/*主要功能函数的次级函数*/
//**********************//

//调用以统计一个班级的人数//

#include "function.h"


int sta_class_num(struct CLASS clarr[])
{
    int n,i;
    POINT err;
    ask_class();                        //打印询问班级编号页面//
    while(1)                            //输入班级编号//
    {
        gotoxy(47,16);
        err=getset();
        if(super_int_scan(&n)==0)
        {
            return 1;                   //CTRL+z则直接返回主菜单//
        }
        if(n<=0||n>=10000)
        {
            error(err);                 //非法输入则重新输入//
        }
        else
        {
            break;                      //合法输入则跳出循环//
        }
    }

    print_head();
    gotoxy(44,12);
    printf("统计成功，%d班的总人数为:",n);

    gotoxy(44,15);                          //打印统计输出框//
    printf("|");
    gotoxy(67,15);
    printf("|");

    for(i=14; i<=16; i+=2)
    {
        gotoxy(44,i);
        printf("————————————");
    }
    gotoxy(45,15);

    printf("%d",clarr[n].num);              //输出统计结果，结果直接在班级结构体中//
    return go_back();                      //询问用户下一步操作//


}
