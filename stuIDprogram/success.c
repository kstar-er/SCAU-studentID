//*普通函数*//

//调用表示操作成功//

#include"function.h"

int success()
{
    print_head();
    gotoxy(50,15);
    printf("—————");
    gotoxy(50,16);
    printf("|操作成功!|");
    gotoxy(50,17);
    printf("—————");

    return go_back();

}
