/*************************************************************************
	> File Name: memory.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月23日 星期四 21时51分08秒
 ************************************************************************/

/*
 *动态分配内存
 */

#include<iostream>
using namespace std;

int main(void)
{
    int *p;
    int *q;

    p=new int(20);//初始化*p的值为20
    if(p==NULL)
    {
        cout<<"new memory failed!"<<endl;
        return 1;
    }

    /*分配块内存*/
    q=new int[100];
    if(q==NULL)
    {
        cout<<"new memory failed!"<<endl;
        return 2;
    }

    q[0]=10;
    q[1]=20;

    cout<<*p<<endl;
    cout<<q[0]<<","<<q[1]<<endl;

    delete p;
    p=NULL;

    delete []q;
    q=NULL;
    return 0;
}
