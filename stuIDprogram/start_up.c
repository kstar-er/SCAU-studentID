//*************//
//*��Ҫ���ܺ���*//
//************//

#include"function.h"

void start_up(struct CLASS clarr[])
{
    char temp[255];
    struct STUDENT student;
    int i=1,n,j;
    FILE *fp;
    fp=fopen("date.txt","r");        //���ļ�//
    while(fgets(temp, 255, (FILE*)fp))                                          //������ȡ�ļ���ÿһ��//
    {
        for(j=0;;j++)                                                            //�����ַ�������Ļس�//
        {
            if(temp[j+1]=='\0'&&temp[j]=='\n')
            {
                temp[j]='\0';
            }
            if(temp[j]=='\0')
            {
                break;
            }

        }

        if(temp[0]=='*')                                        //�ж��ǰ༶��ű�ʶ��//
        {
           n=transf(temp);                                      //��ȡ�༶���//
        }
        else if(temp[0]=='&')                                   //�ж��ǰ༶��������ʶ��//
        {
            clarr[n].num=transf(temp);                          //��ȡ�༶������//
        }
        else                                                    //������Ϊ��˳���ѧ����Ϣ����//
        {
            switch(i)                                           //��˳�����뵽�м������//
            {
            case 1:
                strcpy(student.name,temp);
                i++;
                break;
            case 2:
                strcpy(student.sex,temp);
                i++;
                break;
            case 3:
                strcpy(student.faculty,temp);
                i++;
                break;
            case 4:
                strcpy(student.major,temp);
                i++;
                break;
            case 5:
                strcpy(student.identity,temp);
                i++;
                break;
            case 6:
                strcpy(student.ID,temp);
                i++;
                break;
            case 7:
                strcpy(student.card_number,temp);
                i++;
                break;
            case 8:
                strcpy(student.expiration_date,temp);
                i++;
                break;
            }
        }
        if(i==9)
        {
            scanin(student,n,clarr);                //����һ���м�������뵽������//
            i=1;
        }
    }
    fclose(fp);                                     //�ر��ļ�//
}
