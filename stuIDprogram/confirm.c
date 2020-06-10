/*普通功能函数*/     //本函数为提示栏内询问语句//

//调用以询问用户是否确认本次操作//

#include "function.h"

void confirm()
{
    clean_tip();
    gotoxy(24,25);
    printf("请再次确认该学生信息(y/n)");
    gotoxy(24,26);
    printf("y = 确定|n = 返回主菜单:");

}
