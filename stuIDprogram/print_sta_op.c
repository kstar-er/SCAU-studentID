//**********************//
/*主要功能函数的次级函数*/
//**********************//

//调用打印可统计项目//

#include "function.h"

void print_sta_op()
{
    int i;
    gotoxy(24,24);
    for(i=24; i<=84; i++)
    {
        printf("-");
    }

    gotoxy(31,13);
    printf("|1、班级人数|");
    gotoxy(61,13);
    printf("|2、班级男女比例|");
    gotoxy(31,17);
    printf("|3、总人数|");
    gotoxy(61,17);
    printf("|4、总男女比例|");
    gotoxy(24,27);
    printf("Ctrl+z返回主菜单");
    gotoxy(24,25);
    printf("请选择您想要统计的内容,按回车进行确定:");


}
