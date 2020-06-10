//************//
//主要功能函数//
//************//

//调用以进行查询班级学生信息操作//

#include"function.h"
#include <conio.h>

int show_class(struct CLASS clarr[])
{
    int n;
    struct STUDENT *p1;
    POINT err;
    char key_down;

    print_head();
    ask_class();                    //打印询问班级编号的页面//
    while(1)
    {
        gotoxy(47,16);
        err=getset();
        if(super_int_scan(&n)==0)         //输入班级编号//
        {
            return 1;                   //CTRL+z则直接返回主菜单//
        }
        if(n<=0||n>=10000)              //非法输入则重新输入//
        {
            error(err);
        }
        else                            //合法输入跳出此循环//
        {
            break;
        }
    }

    if(clarr[n].head==NULL)             //若该班级头指针为空//
    {
        print_head();
        gotoxy(42,12);
        printf("|显示失败，并没有学生在%d班|",n);
        clean_tip();
        return go_back();               //询问用户下一步操作//
    }
    else
    {
        p1=clarr[n].head;               //p1指向班级首名学生//

        while(1)
        {
            print_student(*p1);             //打印学生信息//
            gotoxy(24,25);
            printf("显示成功，%d班信息如上，按←和→进行浏览。",n);  //提示栏语句//
            err=getset();
            gotoxy(24,26);
            printf("按0退出程序，1返回主菜单。");
            while(1)
            {
                key_down=getch();               //键盘输入，使程序继续显示下一名学生//
                if(key_down==-32)               //用于消除getch读取方向键时第一次返回的值，该死，不不知道为什么是-32//
                {
                    continue;
                }
                if(key_down==75)
                {
                    if(p1->last!=NULL)
                    {
                        p1=p1->last;
                        clean_tip();                            //清除提示栏//
                        break;
                    }
                    else
                    {
                        gotoxy(24,27);
                        printf("已是第一位学生");
                    }
                }
                else if(key_down==77)
                {
                    if(p1->next!=NULL)
                    {
                        p1=p1->next;
                        clean_tip();                            //清除提示栏//
                        break;
                    }
                    else
                    {
                        gotoxy(24,27);
                        printf("已是最后一位学生");
                    }
                }
                else if(key_down=='0')
                {
                    return 0;
                }
                else if(key_down=='1')
                {
                    return 1;
                }
                else
                {
                    error(err);
                }
            }
        }
    }
    clean_tip();                            //清除提示栏//

}
