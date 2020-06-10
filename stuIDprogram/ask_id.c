/*普通功能函数*/

//调用可以直接获得用户的学，存储在用户传递进来的地址中//

#include "function.h"

int ask_id(char id[])
{
    gotoxy(46,15);                                               //打印询问框//
    printf("------------------");
    gotoxy(46,16);
    printf("|");
    gotoxy(63,16);
    printf("|");
    gotoxy(46,17);
    printf("------------------");
    gotoxy(47,16);
    if(super_scan(id)==0)                                      //若用户输入ctrl+z则直接返回主菜单//
    {
        return 0;
    }
    return 1;
}
