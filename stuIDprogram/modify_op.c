//**********************//
/*��Ҫ���ܺ����Ĵμ�����*/
//**********************//

//�޸ĺ������޸Ľ���//


#include "function.h"

int modify_op(char op,struct STUDENT *p,struct CLASS clarr[])
{
    int i;
    char temp[50]={0};
    print_head();

    for(i=14; i<=18; i++)                                               //��ӡԭ���ݿ���޸Ŀ�//
    {
        gotoxy(38,i);
        printf("|");
        gotoxy(73,i);
        printf("|");
    }
    for(i=14; i<=18; i+=2)
    {
        gotoxy(38,i);
        printf("������������������������������������");
    }
    gotoxy(28,15);
    {
        printf("ԭ����:");
    }
    gotoxy(28,17);
    printf("�޸�����:");

    gotoxy(24,25);                                                      //��ʾ�����//
    printf("��������Ҫ�޸ĵ����ݣ����س�����ȷ����");
    gotoxy(24,27);
    printf("Ctrl+z�������˵�");
    gotoxy(39,15);
    switch(op)                                                        //���û����������ѡ��//
    {
    case '1':
        printf("%s",p->name);
        break;
    case '2':
        printf("%s",p->sex);
        break;
    case '3':
        printf("%s",p->faculty);
        break;
    case '4':
        printf("%s",p->major);
        break;
    case '5':
        printf("%s",p->identity);
        break;
    case '6':
        printf("%s",p->ID);
        break;
    case '7':
        printf("%s",p->card_number);
        break;
    case '8':
        printf("%s",p->expiration_date);
        break;
    default:
        return 0;
    }
    gotoxy(39,17);

    if(super_scan(temp)==0)         //�����޸����ݣ���ΪCTRL+z��ֱ�ӷ������˵�//
    {
        return 0;
    }

    switch(op)                                          //����������¼��//
    {
    case '1':
        strcpy(p->name,temp);
        break;
    case '2':
        strcpy(p->sex,temp);
        break;
    case '3':
        strcpy(p->faculty,temp);
        break;
    case '4':
        strcpy(p->major,temp);
        break;
    case '5':
        strcpy(p->identity,temp);
        break;
    case '6':
        change_class(temp,p,clarr);
        break;
    case '7':
        strcpy(p->card_number,temp);
        break;
    case '8':
        strcpy(p->expiration_date,temp);
        break;
    }
    return 1;                                        //����1����ʾ�޸ĳɹ�//
}
