/*��Ҫ���ܺ���*/

//�����Դ�ӡѧ����Ϣ//

#include"function.h"


void print_student(struct STUDENT p)
{

    int i=9;
    int x=26;
    print_head();

    gotoxy(x,i);
    printf("����:");
    printf("%s",p.name);

    gotoxy(x,i+=2);
    printf("�Ա�:");
    printf("%s",p.sex);

    gotoxy(x,i+=2);
    printf("ѧԺ:");
    printf("%s",p.faculty);

    gotoxy(x,i+=2);
    printf("רҵ:");
    printf("%s",p.major);

    gotoxy(x,i+=2);
    printf("���:");
    printf("%s",p.identity);

    gotoxy(x,i+=2);
    printf("ѧ��:");
    printf("%s",p.ID);

    gotoxy(x,i+=2);
    printf("����:");
    printf("%s",p.card_number);

    gotoxy(x,i+=2);
    printf("��Ч����:");
    printf("%s",p.expiration_date);

}
