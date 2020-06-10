/*重要功能函数*/     //关闭文件，在程序结束后将链表中的内容写入文件//

//文件写入函数，调用将链表中的函数写入文件中//

#include"function.h"

void close_down(struct CLASS clarr[])
{
    int i;
    struct STUDENT *p1;
    FILE *fp;

    fp=fopen("date.txt","w");  //打开文件//
    for(i=0; i<10000; i++)                                                //链表班级节点进行检索//
    {
        if(clarr[i].head!=NULL)                                           //若班级节点存有学生数据//
        {
            fprintf(fp,"*%d\n&%d\n",i,clarr[i].num);                      //写入班级的编号，和班级内人数//
            p1=clarr[i].head;                                             //指针指向班级第一个学生数据//

            while(p1!=NULL)                                              //一直循环直到不再有学生数据//
            {                                                             //写入学生数据//
                fprintf(fp,"%s\n",p1->name);
                fprintf(fp,"%s\n",p1->sex);
                fprintf(fp,"%s\n",p1->faculty);
                fprintf(fp,"%s\n",p1->major);
                fprintf(fp,"%s\n",p1->identity);
                fprintf(fp,"%s\n",p1->ID);
                fprintf(fp,"%s\n",p1->card_number);
                fprintf(fp,"%s\n",p1->expiration_date);
                p1 = p1->next;
            }

        }
    }
    fclose(fp);
}
