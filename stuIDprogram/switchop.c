//*��Ҫ���ܺ���*//


//���ö��û���ѡ����е��ȣ��������������תվ//

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
