//**********************//
/*主要功能函数的次级函数*/
//**********************//

//调用以统计班级中男女比例//

#include "function.h"

typedef struct
{
    int boy;
    int girl;
    double proboy;
    double progirl;
    double proother;
    int other;
} NUM;

int sta_class_sex(struct CLASS clarr[])
{

    int n;
    char t='%';
    char boy[10]="boy",girl[10]="girl";
    char boy2[10]="男",girl2[10]="女";
    POINT err;

    struct STUDENT *p1;
    NUM sta= {0};
    ask_class();
    while(1)
    {

        gotoxy(47,16);
        err=getset();
        if((super_int_scan(&n))==0)
        {
            return 1;
        }
        if(n<0||n>=10000)
        {
            error(err);
        }
        else
        {
            break;
        }
    }
                                     //以上内容同统计班级人数函数//

    if(clarr[n].head==NULL)                         //若该班级中没有人//
    {
        gotoxy(42,12);
        printf("|统计失败，并没有学生在%d班|",n);
        return go_back();                           //询问用户下一步操作//
    }
    else
    {
        p1=clarr[n].head;
        print_head();
        gotoxy(42,12);
        printf("统计成功，%d班的性别比例如下",n);    //班级中有人//

        while(p1!=NULL)                             //循环遍历班级链表//
        {
            if(strcmp(p1->sex,boy)==0||strcmp(p1->sex,boy2)==0)              //对性别项进行比对//
            {
                sta.boy++;                             //比对成功则在统计数据变量中加1//
            }
            else if(strcmp(p1->sex,girl)==0||strcmp(p1->sex,girl2)==0)
            {
                sta.girl++;
            }
            else
            {
                sta.other++;
            }
            p1=p1->next;
        }

        sta.proboy=sta.boy/(clarr[n].num*1.0);               //数据处理，求出所占比例//
        sta.progirl=sta.girl/(clarr[n].num*1.0);
        sta.proother=sta.other/(clarr[n].num*1.0);

        print_sex_table();                                    //打印统计表格//
        gotoxy(53,17);                                        //输出统计结果//
        printf("%d",sta.boy);
        gotoxy(60,17);
        printf("%.1lf%c",sta.proboy*100,t);
        gotoxy(53,19);
        printf("%d",sta.girl);
        gotoxy(60,19);
        printf("%.1f%c",sta.progirl*100,t);
        gotoxy(53,21);
        printf("%d",sta.other);
        gotoxy(60,21);
        printf("%.1f%c",sta.proother*100,t);

        return go_back();
    }

}
