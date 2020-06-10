/*重要辅助功能函数*/

//可以检测输入是否为空，并且没有多余的回车，将输入的整型存在上个函数传递进来的地址中//

#include "function.h"

int super_scan(char temp[])
{
    char t;
    int i=0;
    POINT p;
    p=getset();
    while(1)
    {
        if((t=getchar())==EOF)
        {
            return 0;
        }
        if(t=='\n'&&i==0)
        {
            gotoxy(24,26);
            printf("输入不能为空");
            gotoxy(p.x,p.y);
        }
        else if(t=='\n')
        {
           break;
        }
        else
        {
            temp[i++]=t;
        }
    }
    return 1;
}

