//************//
//主要功能函数//
//************//

//调用以进行查询学生信息操作//

#include"function.h"


int show_student(struct CLASS clarr[])
{
    char id[20]= {0};
    int flag;
    int n;
    struct STUDENT *p1;
    POINT err;
    print_head();                                                 //打印粗程序框架//

    gotoxy(24,25);
    printf("请输入需要查询的学生的学号，按回车进行确定。");       //提示栏语句//
    gotoxy(24,27);
    printf("Ctrl+z返回主菜单");

    if(ask_id(id)==0)                                     //输入学号储存在变量id中//
    {
        return 1;                                               //若为CTRL+z直接返回主菜单//
    }

    n=transf(id);
    p1=clarr[n].head;                                            //p1指向班级首名学生//
    while(p1!=NULL)
    {
        if(strcmp(p1->ID,id)==0)                                 //搜索匹配的学号//
        {
            print_student(*p1);
            clean_tip();                                          //清空提示栏//
            gotoxy(24,27);
            printf("查询成功。");                                  //提示栏语句//
            gotoxy(24,25);
            printf("输入2再次查询，输入1返回主菜单,输入0退出系统:");
            while(1)
            {
                err=getset();
                super_int_scan(&flag);                                 //输入选择//

                if(flag==2)
                {
                    return show_student(clarr);                   //2则重新调用查询函数//
                }
                else if(flag==1)
                {
                    return 1;                                     //1则返回主菜单//
                }
                else if(flag==0)
                {
                    return 0;                                     //0则退出程序//
                }
                else
                {
                    error(err);                                   //非法输入提示，并要求用户重新输入//
                }
            }
            return 1;

        }
        p1=p1->next;                                              //循环，指向下一个学生//
    }
    if(p1==NULL)                                                  //循环没有找到//
    {
        print_head();
        gotoxy(48,16);
        printf("—————————");
        gotoxy(48,18);
        printf("—————————");
        gotoxy(48,17);
        printf("|未找到该学生信息|");                              //告知用户找不到//
        clean_tip();
        return go_back();                                     //询问用下一步操作//
    }
    return 1;
}
