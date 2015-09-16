/*************************************************************************
	> File Name: max_min.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年09月16日 星期三 11时43分47秒
 ************************************************************************/

#include<iostream>
using namespace std;

int max(int x,int y)
{
    int temp;

    if(x < y)
    {
        temp = x;
        x = y;
        y = temp;
    }

    while(y)
    {
        temp = x % y;
        x = y;
        y = temp;
    }

    return x;
}

int min(int x,int y)
{
    return (x*y/max(x,y));
}

int main(void)
{
    int x,y;
    
    cout<<"请输入两个数:";
    cin>>x>>y;
    cout<<"最大公约数："<<max(x,y)<<endl;
    cout<<"最小公倍数："<<min(x,y)<<endl;

    return 0;
}
