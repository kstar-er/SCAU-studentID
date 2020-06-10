//*重要功能函数*//


//调用对用户的选择进行调度，是整个程序的中转站//

#include "function.h"

int switchop(char a,struct CLASS clarr[],POINT err)
{
    switch(a)
    {
    case '0':
        return 0;
    case '1':
        return enter(clarr);
    case '2':
        return modify(clarr);
    case '3':
        return del(clarr);
    case '4':
        return show_class(clarr);
    case '5':
        return show_student(clarr);
    case '6':
        return statistics(clarr);
    }
    return 1;
}
