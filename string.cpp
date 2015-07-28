/*************************************************************************
	> File Name: string.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月28日 星期二 13时18分47秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{   string name;
    cout<<"PLease input your name"<<endl;
    getline(cin,name);
    
    if(name.empty())
    {
        cout<<"Your input is null"<<endl;
        return 1;
    }

    if(name == "answer")
    {
        cout<<"You are boss"<<endl;
    }
    cout<<"hello "+name<<endl;
    cout<<"Your name's length is :"<<name.size()<<endl;
    cout<<"Your name's first alphabet is :"<<name[0]<<endl;
    return 0;
}
