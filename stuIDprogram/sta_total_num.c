//**********************//
/*主要功能函数的次级函数*/
//**********************//
#include "function.h"

int sta_total_num(struct CLASS clarr[])
{

    int i;
    int sum=0;
    print_head();
    gotoxy(44,12);
    printf("统计成功，总人数为:");

    gotoxy(44,15);                              //打印统计结果输出框//
    printf("|");
    gotoxy(67,15);
    printf("|");
    for(i=14; i<=16; i+=2)
    {
        gotoxy(44,i);
        printf("————————————");
    }
    gotoxy(45,15);


    for(i=1;i<10000;i++)                    //遍历班级结构数组//
    {
        if(clarr[i].head!=NULL)
        {
            sum+=clarr[i].num;              //将数组中班级人数一项进行累加//
        }
    }
    printf("%d",sum);                     //输出统计结构//
    return go_back();
}
