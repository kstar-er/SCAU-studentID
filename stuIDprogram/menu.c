//*************/
/*主要功能函数*/
//************//

//提供菜单页面//
//整个程序运转的中心//

#include"function.h"
#include <windows.h>
#pragma comment(lib,"Winmmlib")



void menu(struct CLASS clarr[])
{
    PlaySound(TEXT("menu.wav"),NULL,SND_FILENAME | SND_ASYNC );
    int flag=1;
    char op;
    POINT r,l,err;
    POINT point;
    l.x=32;
    r.x=61;
    while(1)
    {
        if(flag==1)
        {
            print_head();
        }
        gotoxy(l.x,11);
        printf("|1:录入学生信息|");       //打印菜单信息//
        gotoxy(r.x,11);
        printf("|2:修改学生信息|");
        gotoxy(l.x,15);
        printf("|3:删除学生信息|");
        gotoxy(r.x,15);
        printf("|4:显示班级信息|");
        gotoxy(l.x,19);
        printf("|5:显示学生信息|");
        gotoxy(r.x,19);
        printf("|6:统计信息功能|");
        gotoxy(24,27);
        printf("退出请输入0。");

        gotoxy(24,25);
        printf("请根据菜单前序号输入命令选择你想要的此操作:");  //提示栏语句//
        point=getset();                                         //记录当前位置//
        gotoxy(point.x,point.y);

        while(1)
        {
            err=getset();
            scanf("%c",&op);
            if(op>='0'&&op<='6')
            {
                break;
            }
            else
            {
                error(err);
            }
        }
        getchar();

        flag=switchop(op,clarr,point);                          //记录调用其他主要函数的函数的返回值//
        if(flag==0)                                             //若返回值为0，即用户想要退出程序//
        {
            break;
        }                                                       //否则继续在菜单函数中循环//
    }

}                                                               //没有返回值，直接回到主函数//
