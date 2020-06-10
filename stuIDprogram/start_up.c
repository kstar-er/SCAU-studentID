//*************//
//*重要功能函数*//
//************//

#include"function.h"

void start_up(struct CLASS clarr[])
{
    char temp[255];
    struct STUDENT student;
    int i=1,n,j;
    FILE *fp;
    fp=fopen("date.txt","r");        //打开文件//
    while(fgets(temp, 255, (FILE*)fp))                                          //遍历读取文件的每一行//
    {
        for(j=0;;j++)                                                            //消除字符串后面的回车//
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

        if(temp[0]=='*')                                        //判断是班级编号标识符//
        {
           n=transf(temp);                                      //读取班级编号//
        }
        else if(temp[0]=='&')                                   //判断是班级总人数标识符//
        {
            clarr[n].num=transf(temp);                          //读取班级总人数//
        }
        else                                                    //其他则为按顺序的学生信息内容//
        {
            switch(i)                                           //按顺序输入到中间变量中//
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
            scanin(student,n,clarr);                //将整一个中间变量输入到链表中//
            i=1;
        }
    }
    fclose(fp);                                     //关闭文件//
}
