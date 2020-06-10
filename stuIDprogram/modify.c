//************//
/*主要功能函数*/
//************//

//调用以进行修改学生信息操作//

#include"function.h"


int modify(struct CLASS clarr[])
{
    char id[20]= {0},op;
    int n;
    struct STUDENT *p1;
    POINT err;
    print_head();

    gotoxy(24,25);
    printf("请输入需要修改信息的学生的学号，按回车进行确定。");     //提示栏语句//
    gotoxy(24,27);
    printf("Ctrl+z返回主菜单");



    if(ask_id(id)==0)                                        //CTRL+z即返回主菜单//
    {
        return 1;
    }

    n=transf(id);                                                   //提取学号中的班级编号//
    p1=clarr[n].head;                                               //p1指向该班级首位学生//
    while(p1!=NULL)
    {
        if(strcmp(p1->ID,id)==0)                                    //学号匹配//
        {
            print_student(*p1);                                     //匹配成功打印学生信息//
            print_modify_op();                                      //打印修改项目选项//
            while(1)                                                //用户对修改内容进行选择//
            {
                err=getset();
                super_scan(&op);
                if(op>'0'&&op<='8')
                {
                    if(modify_op(op,p1,clarr))                            //进入修改函数页面，若修改成功返回1//
                    {
                        print_student(*p1);                         //修改成功打印修改后学生信息//
                        gotoxy(24,26);
                        printf("已修改，请继续。");                  //提示栏语句//
                        print_modify_op();                           //再次打印修改项目选项//
                    }
                    else                                             //若用户取消修改则直接返回主菜单//
                    {
                        return 1;
                    }

                }
                else if(op=='0')                                      //用户输入表示直接返回主菜单//
                {
                    return 1;
                }
                else                                                //非法输入，请用户重新输入//
                {
                    error(err);
                }
            }
        }
        p1=p1->next;
    }
    if(p1==NULL)                                                //若无该学生信息，对用户进行提示//
    {
        print_head();
        gotoxy(48,16);
        printf("—————————");
        gotoxy(48,18);
        printf("—————————");
        gotoxy(48,17);
        printf("|未找到该学生信息|");


        clean_tip();
        gotoxy(24,25);
        return go_back();                                       //询问用户下一步操作，返回主菜单或者退出函数//
    }
    return 1;
}
