/*************************************************************************
	> File Name: namespace.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月22日 星期三 16时50分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

namespace A
{
    int x=1;
    void fun()
    {
        cout<<"A"<<endl;
    }
}

namespace B
{
    int x=2;
    void fun()
    {
        cout<<"B"<<endl;
    }
    void fun2()
    {
        cout<<"2B"<<endl;
    }
}

using namespace B;
int main(void)
{
    cout<<A::x<<endl; 
    cout<<x<<endl;
    fun();
    fun2();
}
