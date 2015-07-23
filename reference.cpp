/*************************************************************************
	> File Name: reference.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月23日 星期四 18时59分56秒
 ************************************************************************/

/*
 *引用是对象的别名，对别名操作影响对象本身。
 *引用必须初始化，只有别名是不成立的。
 */
#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(void)
{
    int a=10;
    int &b=a;

    b=20;
    cout<<"After modify b,a = "<<a<<endl;

    /*指针引用*/
    int p=10;
    int *q=&p;
    int *&k=q;
    *k=20;
    cout<<"After modify *k,p = "<<p<<endl;

    /*利用引用交换两个数*/
    int i=10,j=20;
    swap(i,j);
    cout<<"After swap,i = "<<i<<",j = "<<j<<endl;
    return 0;
}

