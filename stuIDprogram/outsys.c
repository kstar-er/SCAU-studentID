/*��ͨ���ܺ���*/

//�˳�ҳ�棬�����û��Ѿ��ɹ��˳�//

#include"function.h"
#pragma comment(lib,"Winmmlib")

void outsys()
{
    PlaySound(TEXT("close.wav"),NULL,SND_FILENAME | SND_ASYNC );
    int x,y,i;
    print_head();
    x=46;
    y=8;
    gotoxy(x,++y);
    printf("  ��������������  ");gotoxy(x,++y);Sleep(80);
    printf(" ��            ��  ");gotoxy(x,++y);Sleep(80);
    printf("��              �� ");gotoxy(x,++y);Sleep(80);
    printf("��  ��     ��   �� ");gotoxy(x,++y);Sleep(80);
    printf("�� ����   ����  �� ");gotoxy(x,++y);Sleep(80);
    printf("��              �� ");gotoxy(x,++y);Sleep(80);
    printf("��   ��    ��   �� ");gotoxy(x,++y);Sleep(80);
    printf(" ��   ������   ��  ");gotoxy(x,++y);Sleep(80);
    printf("  ��          ��   ");gotoxy(x,++y);Sleep(80);
    printf("   ������������    ");gotoxy(x,++y);Sleep(80);
    printf("      ������       ");gotoxy(x,++y);Sleep(80);
    printf("������������������ ");gotoxy(x,++y);Sleep(80);
    printf("      ������       ");gotoxy(x,++y);Sleep(80);
    printf("  ��лʹ�ñ�����  ");


    gotoxy(24,25);
    printf("�ѳɹ��˳��������������");



i=1;
while(!_kbhit())
{

    i++;
    x=64;y=15;
    gotoxy(x,++y);
    printf("  ����");gotoxy(x,++y);
    printf(" ��##��");gotoxy(x,++y);
    printf("  ����");gotoxy(x,++y);
    printf(" ��");gotoxy(x,++y);
    printf("��");gotoxy(x,++y);
    Sleep(200);
    x=64;y=15;
    gotoxy(x,++y);
    printf("      ");gotoxy(x,++y);
    printf("       ");gotoxy(x,++y);
    printf("     ");gotoxy(x,++y);
    printf("   ");gotoxy(x,++y);
    printf("  ");gotoxy(x,++y);

    x=64;y=17;
    gotoxy(x,++y);
    printf("     ����");gotoxy(x,++y);
    printf("������##��");gotoxy(x,++y);
    printf("     ����");gotoxy(x,++y);
    Sleep(200);

     x=64;y=17;
    gotoxy(x,++y);
    printf("         ");gotoxy(x,++y);
    printf("          ");gotoxy(x,++y);
    printf("         ");gotoxy(x,++y);

    if(i==100)
    {
        break;
    }
}


    x=64;y=17;
    gotoxy(x,++y);
    printf("     ����");gotoxy(x,++y);
    printf("������##��");gotoxy(x,++y);
    printf("     ����");gotoxy(x,++y);
    getch();
    gotoxy(30,30);

}
