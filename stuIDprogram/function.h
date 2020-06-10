#include <stdio.h>
#include <windows.h>

struct STUDENT                  //定义学生数据结构体//
{
    struct STUDENT *last;   //指向下一个学生指针//
    char name[20];          //学生姓名//
    char sex[10];           //学生性别//
    char faculty[50];       //学生学院//
    char major[50];         //学生专业//
    char identity[20];      //学生身份//
    char ID[20];            //学生学号//
    char card_number[20];   //学生证卡号///
    char expiration_date[20];//学生证有效日期//
    struct STUDENT *next;     //指向下一个学生指针//

};
struct CLASS
{
    struct STUDENT *tail;   //指向班级最后一个学生//
    struct STUDENT *head;   //指向班级第一个学生//
    int num;                //存储班级人数//
};

void ask_class();       //询问班级编号函数//

int ask_id(char id[]);   //

void clean_tip();       //清空提示栏函数//

void close_down(struct CLASS clarr[]);      //关闭程序输入文件函数//

void confirm();         //确认操作函数//

void change_class(char later_id[],struct STUDENT *p1,struct CLASS clarr[]);  //换班函数//

int del(struct CLASS clarr[]);              //删除学生信息函数//

int enter(struct CLASS clarr[]);            //输入学生信息函数//

void error(POINT point);                //提示操作错误函数//

POINT getset();                         //获得光标坐标函数//

int go_back();                          //返回菜单函数//

void gotoxy(int x,int y);               //移动光标函数//

void menu(struct CLASS clarr[]);       //主菜单函数//

int modify(struct CLASS clarr[]);      //修改学生信息函数//

int modify_op(char op,struct STUDENT *p,struct CLASS clarr[]);    //提供修改选项函数//

void outsys();                              //退出系统成功提示函数//

void print_head();                          //打印系统框架函数//

void print_modify_op();                     //打印学生修改项函数

void print_sta_op();                        //打印统计选项函数//

void print_student(struct STUDENT p);       //打印学生信息函数//

void print_sex_table();                     //打印性别统计表格函数//

int show_class(struct CLASS clarr[]);       //显示班级信息函数//

int show_student(struct CLASS clarr[]);     //显示学生信息函数//

int statistics(struct CLASS clarr[]);       //统计学生信息函数//
int sta_class_num(struct CLASS clarr[]);    //统计班级总人数//
int sta_class_sex(struct CLASS clarr[]);    //统计班级性别比例//
int sta_total_num(struct CLASS clarr[]);    //统计总人数//
int sta_total_sex(struct CLASS clarr[]);    //统计总性别比例//

void start_up(struct CLASS clarr[]);        //启动程序，将文件内容输入函数//

int success();                              //提示操作成功函数//

void scanin(struct STUDENT a,int n,struct CLASS *arr);      //写入学生信息函数//

int super_scan(char temp[]);                        //超级写入函数，不会穿模//

int super_int_scan(int *n);

int switchop(char a,struct CLASS clarr[],POINT err);//菜单选项选择函数//

int transf(char *a);                                //转换字符串到整型函数//

void welcome();

