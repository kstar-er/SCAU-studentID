//**********************//
/*主要功能函数的次级函数*/
//**********************//

//调用以打印可修改的项目//

#include "function.h"

void print_modify_op()
{
    int i,j;
    for(i=1,j=7; i<=8; i++)     //在学生信息前面添加序号，方便选择//
    {
        gotoxy(24,j+=2);
        printf("%d:",i);
    }
    gotoxy(24,27);                        //提示栏语句//
    printf("输入0返回主菜单。");
    gotoxy(24,25);

    printf("请选择想要修改的项目:");



}
