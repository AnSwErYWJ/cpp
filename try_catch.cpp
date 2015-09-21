/*************************************************************************
	> File Name: try_catch.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年09月21日 星期一 18时42分41秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Exception
{
    public:
    virtual void printException(){cout<<"Exception--printException"<<endl;}
    virtual ~Exception(){}
};

class IndexException:public Exception
{
    public:
    virtual void printException(){cout<<"IndexException--printException"<<endl;}
};

void test()
{
    throw IndexException();//异常抛出
}

int main(void)
{
    try
    {
        test();
        cout<<"try"<<endl;
    }
    catch(...)//捕获
    {
        e.printException();
    }
    return 0;
}
