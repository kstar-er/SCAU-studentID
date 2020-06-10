
/*重要辅助功能函数*/

//可以检测输入是否为空，并且没有多余的回车，将输入的整型存在上个函数传递进来的地址中//

#include "function.h"

int super_int_scan(int *n)
{
    char t;
    int i=1;
    char a[50]={0};
    POINT p;
    a[0]='*';
    p=getset();
    while(1)
    {

        if((t=getchar())==EOF)
        {
            return 0;
        }
        if(t=='\n'&&i==1)
        {
            gotoxy(24,26);
            gotoxy(p.x,p.y);
        }
        else if(t=='\n')
        {
           break;
        }
        else
        {
            a[i++]=t;
        }
    }
    *n=transf(a);
    return 1;
}
