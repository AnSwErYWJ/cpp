/*************************************************************************
	> File Name: string_copy.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月21日 星期二 14时24分43秒
 ************************************************************************/

#include<iostream>
#include<string.h>

using namespace std;

int main(void)
{
    char string1[]="i am answer";
    char string2[20];

    strcpy(string2,string1);
    std::cout<<string1<<std::endl;
    std::cout<<string2<<std::endl;

    return 0;
}
