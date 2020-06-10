#include <stdio.h>
#include <windows.h>

struct STUDENT                  //����ѧ�����ݽṹ��//
{
    struct STUDENT *last;   //ָ����һ��ѧ��ָ��//
    char name[20];          //ѧ������//
    char sex[10];           //ѧ���Ա�//
    char faculty[50];       //ѧ��ѧԺ//
    char major[50];         //ѧ��רҵ//
    char identity[20];      //ѧ�����//
    char ID[20];            //ѧ��ѧ��//
    char card_number[20];   //ѧ��֤����///
    char expiration_date[20];//ѧ��֤��Ч����//
    struct STUDENT *next;     //ָ����һ��ѧ��ָ��//

};
struct CLASS
{
    struct STUDENT *tail;   //ָ��༶���һ��ѧ��//
    struct STUDENT *head;   //ָ��༶��һ��ѧ��//
    int num;                //�洢�༶����//
};

void ask_class();       //ѯ�ʰ༶��ź���//

int ask_id(char id[]);   //

void clean_tip();       //�����ʾ������//

void close_down(struct CLASS clarr[]);      //�رճ��������ļ�����//

void confirm();         //ȷ�ϲ�������//

void change_class(char later_id[],struct STUDENT *p1,struct CLASS clarr[]);  //���ຯ��//

int del(struct CLASS clarr[]);              //ɾ��ѧ����Ϣ����//

int enter(struct CLASS clarr[]);            //����ѧ����Ϣ����//

void error(POINT point);                //��ʾ����������//

POINT getset();                         //��ù�����꺯��//

int go_back();                          //���ز˵�����//

void gotoxy(int x,int y);               //�ƶ���꺯��//

void menu(struct CLASS clarr[]);       //���˵�����//

int modify(struct CLASS clarr[]);      //�޸�ѧ����Ϣ����//

int modify_op(char op,struct STUDENT *p,struct CLASS clarr[]);    //�ṩ�޸�ѡ���//

void outsys();                              //�˳�ϵͳ�ɹ���ʾ����//

void print_head();                          //��ӡϵͳ��ܺ���//

void print_modify_op();                     //��ӡѧ���޸����

void print_sta_op();                        //��ӡͳ��ѡ���//

void print_student(struct STUDENT p);       //��ӡѧ����Ϣ����//

void print_sex_table();                     //��ӡ�Ա�ͳ�Ʊ����//

int show_class(struct CLASS clarr[]);       //��ʾ�༶��Ϣ����//

int show_student(struct CLASS clarr[]);     //��ʾѧ����Ϣ����//

int statistics(struct CLASS clarr[]);       //ͳ��ѧ����Ϣ����//
int sta_class_num(struct CLASS clarr[]);    //ͳ�ư༶������//
int sta_class_sex(struct CLASS clarr[]);    //ͳ�ư༶�Ա����//
int sta_total_num(struct CLASS clarr[]);    //ͳ��������//
int sta_total_sex(struct CLASS clarr[]);    //ͳ�����Ա����//

void start_up(struct CLASS clarr[]);        //�������򣬽��ļ��������뺯��//

int success();                              //��ʾ�����ɹ�����//

void scanin(struct STUDENT a,int n,struct CLASS *arr);      //д��ѧ����Ϣ����//

int super_scan(char temp[]);                        //����д�뺯�������ᴩģ//

int super_int_scan(int *n);

int switchop(char a,struct CLASS clarr[],POINT err);//�˵�ѡ��ѡ����//

int transf(char *a);                                //ת���ַ��������ͺ���//

void welcome();

