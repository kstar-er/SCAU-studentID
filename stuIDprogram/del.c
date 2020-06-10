//************//
/*主要功能函数*/
//************//

//调用以进行删除学生信息操作//

#include"function.h"
#pragma comment(lib,"Winmmlib")

int del(struct CLASS clarr[])
{
    char id[20]= {0},flag;
    int n;
    struct STUDENT *p1,*p2;
    POINT err;
    print_head();

    gotoxy(24,25);                                              //提示栏提示语句//
    printf("请输入需要删除的学生的学号，按回车进行确定。");
    gotoxy(24,27);
    printf("Ctrl+z返回主菜单");
    if(ask_id(id)==0)                                              //获取学生学号，CTRL+Z返回主菜单//
    {
        return 1;
    }

    n=transf(id);                                                //提取学号中的班级编号//
    p1=clarr[n].head;                                            //p1指向班级内第一个学生//

    while(p1!=NULL)                                             //对学生学号进行匹配查询//
    {
        if(strcmp(p1->ID,id)==0)
        {
            print_student(*p1);
            confirm();                                           //查询成功后询问是否删除//
            while(1)
            {
                err=getset();                                    //获取当前坐标点备用//
                scanf("%c",&flag);                               //用户进行确认与否输入//
                getchar();                                       //消除回车//
                if(flag=='y')                                    //确认后进行删除操作//
                {
                    PlaySound(TEXT("del.wav"),NULL,SND_FILENAME | SND_ASYNC );
                    if(p1->last==NULL&&p1->next==NULL)                         //若该班级中只有该学生//
                    {
                        clarr[n].head=NULL;
                        clarr[n].tail=NULL;
                    }
                    else if(p1->last==NULL)                                 //若该学生为班级中第一个后一个学生//
                    {
                        p2=p1->next;                                       // 更换班级头指针//
                        clarr[n].head=p2;                                  //断开班级第二名学生和第一名学生链接//
                        p2->last=NULL;
                    }
                    else if(p1->next==NULL)                                 //若该学生为班级中最后一个学生
                    {
                        p2=p1->last;                                         //更换班级尾指针//
                        clarr[n].tail=p2;                                  //断开倒数第二位学生和最后一位学的链接//
                        p2->next=NULL;
                    }
                    else                                                    //若该学生为班级中中间位置学生//
                    {
                        p2=p1->next;                                        //该学前后学生的前后指针互指//
                        p2->last=p1->last;
                        p2=p1->last;
                        p2->next=p1->next;
                    }
                    free(p1);                                   //释放p1指向的学生内存，成功删除//
                    clarr[n].num--;                              //该班级人数减一//

                    return success();                            //调用操作成功函数，告知用户操作成功，并询问下一步操作//
                }
                else if(flag=='n')                                //若用户取消此次操作//
                {
                    return 1;                                     //直接返回主菜单//
                }
                else                                               //若有其他非法输入//
                {
                    error(err);                                     //调用出错误函数，让用户进行重新输入//
                }
            }
        }
        p2=p1;                                                      //p2指向p1上一个学生//
        p1=p1->next;                                                //p1指向下一个学生
    }
    if(p1==NULL)                                                    //若搜索完该学号对应班级仍无该学生，即表明无此学号存在//
    {
        print_head();                                               //告知用户此学号不存在//
        gotoxy(48,16);
        printf("—————————");
        gotoxy(48,18);
        printf("—————————");
        gotoxy(48,17);
        printf("|未找到该学生信息|");
        clean_tip();
        gotoxy(24,25);
        printf("输入1再次输入学号，输入0返回主菜单:");              //询问用户下一步操作//
        while(1)
        {
            err=getset();
            scanf("%c",&flag);
            if(flag=='1')                                           //输入1，则调用删除函数再次进行//
            {
                return del(clarr);
            }
            else if(flag=='0')                                      //输入0，则直接返回主菜单//
            {
                return 1;
            }
            else                                                    //其他非法输入则让用户重新输入//
            {
                error(err);
            }
        }
    }
    return 0;
}


