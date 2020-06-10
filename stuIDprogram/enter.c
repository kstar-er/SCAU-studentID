//************//
/*主要功能函数*/
//************//

//调用以进行录入学生信息操作//


#include"function.h"


int enter(struct CLASS clarr[])
{
    struct STUDENT temp={0};
    int i=9,j=0,k=0,n;
    char flag;
    POINT err;
    POINT point[10];
    print_head();

    gotoxy(25,i);                                       //打印需要输入的信息项目//
    printf("姓名:");
    point[j++]=getset();                                //记录该项后面坐标//

    gotoxy(25,i+=2);
    printf("性别:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("学院:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("专业:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("身份:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("学号:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("卡号:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("有效日期:");
    point[j++]=getset();

    i+=2;
    gotoxy(24,i++);                                             //提示栏信息//
    printf("请按顺序输入学生信息，按回车进入下一行。");
    gotoxy(24,27);
    printf("Ctrl+z返回主菜单");

    gotoxy(24,24);
    for(i=24;i<=84;i++)
    {
        printf("-");
    }

    gotoxy(point[k].x,point[k].y);          //跳转到上面记录位置，输入姓名//
    if(super_scan(temp.name)==0)          //若输入CTRL+z可以直接中断此次输入直接返回主菜单//
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //2输入性别//
    if(super_scan(temp.sex)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //3输入学院//
    if(super_scan(temp.faculty)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //4输入专业//
    if(super_scan(temp.major)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //5输入身份//
    if(super_scan(temp.identity)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //6输入学号//
    if(super_scan(temp.ID)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //7输入卡号//
    if(super_scan(temp.card_number)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //8输入有效日期//
    if(super_scan(temp.expiration_date)==0)
    {
        return 1;
    }

    confirm();

    while(1)
    {
        err=getset();
        scanf("%c",&flag);                    //进行确认//
        getchar();                            //消除回车//
        if(flag=='y')                         //若用户确认//
        {
            n=transf(temp.ID);                 //提取学号中班级//
            scanin(temp,n,clarr);               //将信息输入到该班级//
            clarr[n].num++;                     //该班级人数加1//
            return success();                   //调用操作成功函数，告知用户输入成功，并询问下一步操作//
        }
        else if(flag=='n')                      //若用户取消//
        {
            return 0;                           //直接返回主菜单//
        }
        else
        {
            error(err);                          //其他非法输入则让用户重新输入//
        }
    }
}
