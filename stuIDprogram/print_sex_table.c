//**********************//
/*主要功能函数的次级函数*/
//**********************//

//调用以打印学生性别统计的表格//

#include "function.h"

void print_sex_table()
{
    int i,j;

    for(i=14; i<=22; i++)                   //打印表格框架//
    {
        for(j=45; j<=66; j+=7)
        {
            gotoxy(j,i);
            printf("|");
        }
    }
    for(i=14; i<=22; i+=2)
    {
        gotoxy(46,i);
        printf("——————————");
    }


    gotoxy(53,15);                          //打印表格栏目//
    printf(" 人数");
    gotoxy(60,15);
    printf(" 占比");
    gotoxy(46,17);
    printf(" 男生");
    gotoxy(46,19);
    printf(" 女生");
    gotoxy(46,21);
    printf(" 其他");




}
