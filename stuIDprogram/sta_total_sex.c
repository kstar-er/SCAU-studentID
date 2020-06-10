//**********************//
/*主要功能函数的次级函数*/
//**********************//

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


int sta_total_sex(struct CLASS clarr[])
{
    int i;
    double sum=0;
    char t='%';
    char boy[10]="boy",girl[10]="girl";
    char boy2[10]="男",girl2[10]="女";
    struct STUDENT *p1;
    NUM sta= {0};

    for(i=1; i<10000; i++)                                      //遍历班级结构体数组//
    {
        if(clarr[i].head!=NULL)
        {
            sum+=clarr[i].num;                                  //累计班级中人数，求得总人数//
            p1=clarr[i].head;
            while(p1!=NULL)                                     //每个班级进行性别人数累计//
            {
                if(strcmp(p1->sex,boy)==0||strcmp(p1->sex,boy2))
                {
                    sta.boy++;
                }
                else if(strcmp(p1->sex,girl)==0||strcmp(p1->sex,girl2))
                {
                    sta.girl++;
                }
                else
                {
                    sta.other++;
                }
                p1=p1->next;
            }


        }
    }


    print_head();
    gotoxy(42,12);
    printf("统计成功，总性别比例如下");

    sta.proboy=sta.boy/sum;                         //数据处理，求得性别占比//
    sta.progirl=sta.girl/sum;
    sta.proother=sta.other/sum;

    print_sex_table();                              //打印统计表格//

    gotoxy(53,17);                                  //输出统计数据//
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

    return go_back();                           //询问下一步操作//


}
