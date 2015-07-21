/*************************************************************************
	> File Name: getline.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月21日 星期二 14时17分11秒
 ************************************************************************/

/*
 *介绍cin对象的getline方法
 */
#include<iostream>
using namespace std;

int main(void)
{
    char a[10];
    char b[5];
    std::cout<<"Please input a b c\n";
    std::cin.getline(a,10);//默认换行符作为分隔符
    std::cout<<a<<"\n"; 
    std::cout<<"Please input a b c\n";
    std::cin.getline(b,3,' ');
    std::cout<<b<<"\n"; 

    return 0;
}
