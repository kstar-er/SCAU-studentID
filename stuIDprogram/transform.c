//*��Ҫ����*//

//���ô˺�����ѧ������ȡ�༶���α���//
//���ô˺���Ҳ�ɽ��ļ��а༶�����ַ���ת��Ϊ����//
//���ô˺�����������ȡ�༶������//

#include"function.h"
#include <math.h>

int transf(char *a)
{
    int i,sum=0,len,j,mul;
    if(a[0]=='*')                       //�ж�Ϊ�༶��ű�ʶ��//
    {
        len=strlen(a);
        for(i=1;i<len;i++)          //���ַ���ת��Ϊ���Ͳ�����//
        {
            for(j=len-i,mul=1;j>1;j--)
            {
                mul*=10;
            }
            sum+=(a[i]-48)*mul;
        }
    }
    else if(a[0]=='&')              //�ж�Ϊ�༶������ʶ��//
    {
        len=strlen(a);
        for(i=1;i<len;i++)          //���ַ���ת��Ϊ���Ͳ�����//
        {
            for(j=len-i,mul=1;j>1;j--)
            {
                mul*=10;
            }
            sum+=(a[i]-48)*mul;
        }
    }
    else                            //�ж�Ϊѧ��//
    {
        for(i=7;i<10;i++)           //��ѧ�ŵ�ȥ�����ת��//
        {
            if(i==7)
            {
                sum+=(a[i]-48)*100;
            }
            else if(i==8)
            {
                sum+=(a[i]-48)*10;
            }
            else if(i==9)
            {
                sum+=(a[i]-48)*1;
            }
        }
    }
    if(sum>0&&sum<10000)            //�༶����ֻ��1~9999֮�䣬����ֻ������������ֵ//
    {
        return sum;
    }
    else                            //�������򷵻�0//
    {
        return 0;
    }


}
