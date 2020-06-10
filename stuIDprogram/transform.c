//*重要函数*//

//调用此函数从学号中提取班级整形编码//
//调用此函数也可将文件中班级编码字符串转换为整型//
//调用此函数还可以提取班级总人数//

#include"function.h"
#include <math.h>

int transf(char *a)
{
    int i,sum=0,len,j,mul;
    if(a[0]=='*')                       //判断为班级编号标识符//
    {
        len=strlen(a);
        for(i=1;i<len;i++)          //将字符串转换为整型并返回//
        {
            for(j=len-i,mul=1;j>1;j--)
            {
                mul*=10;
            }
            sum+=(a[i]-48)*mul;
        }
    }
    else if(a[0]=='&')              //判断为班级人数标识符//
    {
        len=strlen(a);
        for(i=1;i<len;i++)          //将字符串转换为整型并返回//
        {
            for(j=len-i,mul=1;j>1;j--)
            {
                mul*=10;
            }
            sum+=(a[i]-48)*mul;
        }
    }
    else                            //判读为学号//
    {
        for(i=7;i<10;i++)           //对学号的去间进行转换//
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
    if(sum>0&&sum<10000)            //班级编码只在1~9999之间，所以只返回这个区间的值//
    {
        return sum;
    }
    else                            //其他的则返回0//
    {
        return 0;
    }


}
