/*��ͨ���ܺ���*/
//�ú������ڴ���Ƿ��������//

#include"function.h"

#pragma comment(lib,"Winmmlib")
void error(POINT point)
{

    PlaySound(TEXT("err.wav"),NULL,SND_FILENAME | SND_ASYNC);


    gotoxy(49,27);
    printf("�������������");         //��ʾ����ʾ//
    gotoxy(point.x,point.y);
    printf("             ");               //�����ϴ���������//
    gotoxy(point.x,point.y);

}
