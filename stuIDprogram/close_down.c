/*��Ҫ���ܺ���*/     //�ر��ļ����ڳ�������������е�����д���ļ�//

//�ļ�д�뺯�������ý������еĺ���д���ļ���//

#include"function.h"

void close_down(struct CLASS clarr[])
{
    int i;
    struct STUDENT *p1;
    FILE *fp;

    fp=fopen("date.txt","w");  //���ļ�//
    for(i=0; i<10000; i++)                                                //����༶�ڵ���м���//
    {
        if(clarr[i].head!=NULL)                                           //���༶�ڵ����ѧ������//
        {
            fprintf(fp,"*%d\n&%d\n",i,clarr[i].num);                      //д��༶�ı�ţ��Ͱ༶������//
            p1=clarr[i].head;                                             //ָ��ָ��༶��һ��ѧ������//

            while(p1!=NULL)                                              //һֱѭ��ֱ��������ѧ������//
            {                                                             //д��ѧ������//
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
