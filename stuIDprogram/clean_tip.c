/*普通功能函数*/
//调用可以清空提示栏//

#include "function.h"

void clean_tip()
{
    int i,j;
    for(j=25;j<=27;j++)
    {
        gotoxy(24,j);
        for(i=24; i<=85; i++)
        {
            printf(" ");
        }
    }
}
