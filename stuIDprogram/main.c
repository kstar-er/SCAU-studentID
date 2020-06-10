//**********************//
//*主函数，就是个主函数*//
//**********************//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include"function.h"
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>





int main()
{
    struct CLASS clarr[10000]={0};      //建立班级结构体数组//

    welcome();

    start_up(clarr);                     //打开文件，输入文件内容到链表中//

    menu(clarr);                         //运行主程序，即菜单程序//

    close_down(clarr);                   //关闭文件，输入链表内容到文件中//

    outsys();                            //退出程序页面，告诉用户已经成功退出//

    return 0;                           //结束，退出程序//
}
