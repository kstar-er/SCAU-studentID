//************//
/*��Ҫ���ܺ���*/
//************//

//�����Խ���¼��ѧ����Ϣ����//


#include"function.h"


int enter(struct CLASS clarr[])
{
    struct STUDENT temp={0};
    int i=9,j=0,k=0,n;
    char flag;
    POINT err;
    POINT point[10];
    print_head();

    gotoxy(25,i);                                       //��ӡ��Ҫ�������Ϣ��Ŀ//
    printf("����:");
    point[j++]=getset();                                //��¼�����������//

    gotoxy(25,i+=2);
    printf("�Ա�:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("ѧԺ:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("רҵ:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("���:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("ѧ��:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("����:");
    point[j++]=getset();

    gotoxy(25,i+=2);
    printf("��Ч����:");
    point[j++]=getset();

    i+=2;
    gotoxy(24,i++);                                             //��ʾ����Ϣ//
    printf("�밴˳������ѧ����Ϣ�����س�������һ�С�");
    gotoxy(24,27);
    printf("Ctrl+z�������˵�");

    gotoxy(24,24);
    for(i=24;i<=84;i++)
    {
        printf("-");
    }

    gotoxy(point[k].x,point[k].y);          //��ת�������¼λ�ã���������//
    if(super_scan(temp.name)==0)          //������CTRL+z����ֱ���жϴ˴�����ֱ�ӷ������˵�//
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //2�����Ա�//
    if(super_scan(temp.sex)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //3����ѧԺ//
    if(super_scan(temp.faculty)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //4����רҵ//
    if(super_scan(temp.major)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //5�������//
    if(super_scan(temp.identity)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //6����ѧ��//
    if(super_scan(temp.ID)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //7���뿨��//
    if(super_scan(temp.card_number)==0)
    {
        return 1;
    }
    k++;

    gotoxy(point[k].x,point[k].y);          //8������Ч����//
    if(super_scan(temp.expiration_date)==0)
    {
        return 1;
    }

    confirm();

    while(1)
    {
        err=getset();
        scanf("%c",&flag);                    //����ȷ��//
        getchar();                            //�����س�//
        if(flag=='y')                         //���û�ȷ��//
        {
            n=transf(temp.ID);                 //��ȡѧ���а༶//
            scanin(temp,n,clarr);               //����Ϣ���뵽�ð༶//
            clarr[n].num++;                     //�ð༶������1//
            return success();                   //���ò����ɹ���������֪�û�����ɹ�����ѯ����һ������//
        }
        else if(flag=='n')                      //���û�ȡ��//
        {
            return 0;                           //ֱ�ӷ������˵�//
        }
        else
        {
            error(err);                          //�����Ƿ����������û���������//
        }
    }
}
