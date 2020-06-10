/*普通功能函数*/

//此为系统页面，调用可以询问用户需要进行操作的班级编号//


#include "function.h"

void ask_class()
{
    print_head();

    gotoxy(24,25);
    printf("请输入需要查询的班级编号，按回车确定");
    gotoxy(24,27);
    printf("Ctrl+z返回主菜单");

    gotoxy(46,15);
    printf("------------------");
    gotoxy(46,16);
    printf("|");
    gotoxy(63,16);
    printf("|");
    gotoxy(46,17);
    printf("------------------");
    gotoxy(47,16);

}
