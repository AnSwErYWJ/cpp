/*************************************************************************
	> File Name: io.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月22日 星期三 16时38分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int x=0;
    cout<<"请输入一个整数"<<endl;
    cin>>x;

    cout<<oct<<x<<endl;
    cout<<dec<<x<<endl;
    cout<<hex<<x<<endl;

    bool y=false;
    cout<<"请输入一个布尔值"<<endl;
    cin>>y;
    cout<<boolalpha<<y<<endl;
}
