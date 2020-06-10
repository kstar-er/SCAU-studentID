/*重要功能函数*/

//调用以打印学生信息//

#include"function.h"


void print_student(struct STUDENT p)
{

    int i=9;
    int x=26;
    print_head();

    gotoxy(x,i);
    printf("姓名:");
    printf("%s",p.name);

    gotoxy(x,i+=2);
    printf("性别:");
    printf("%s",p.sex);

    gotoxy(x,i+=2);
    printf("学院:");
    printf("%s",p.faculty);

    gotoxy(x,i+=2);
    printf("专业:");
    printf("%s",p.major);

    gotoxy(x,i+=2);
    printf("身份:");
    printf("%s",p.identity);

    gotoxy(x,i+=2);
    printf("学号:");
    printf("%s",p.ID);

    gotoxy(x,i+=2);
    printf("卡号:");
    printf("%s",p.card_number);

    gotoxy(x,i+=2);
    printf("有效日期:");
    printf("%s",p.expiration_date);

}
