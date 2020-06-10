/*普通功能函数*/
//用于主要功能函数结尾，询问用户返回主菜单或退出程序//


#include"function.h"
int go_back()
{
    int flag;
    POINT err;
    gotoxy(24,25);
    printf("输入1返回主菜单，输入0退出程序:");        //提示栏语句//
    while(1)
    {
        err=getset();                               //获得当前位置//
        super_int_scan(&flag);
        if(flag==1)
        {
            return 1;
        }
        else if(flag==0)
        {
            return 0;
        }
        else                                        //非法输入让用户重新输入//
        {
            error(err);
        }
    }
}
