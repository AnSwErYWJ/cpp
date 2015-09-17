/*************************************************************************
	> File Name: this.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年09月17日 星期四 09时32分59秒
 ************************************************************************/

/*
 *this 指针
 */

#include<iostream>
using namespace std;

class Array
{
    public:
    Array(int len);
    ~Array();
    int getlen();
    void setlen(int len);
    Array& printfinfo();
    private:
    int m_ilen;
};

Array::Array(int len)
{
    this->m_ilen = len;
}

Array::~Array()
{
    
}

int Array::getlen()
{
    return this->m_ilen;
}

void Array::setlen(int len)
{
    this->m_ilen = len;
}

Array& Array::printfinfo()
{
    cout<<this->m_ilen<<endl;
    return *this;
}

int main(void)
{
    Array arr(5);
    arr.setlen(10);
    arr.printfinfo().setlen(15);
    arr.printfinfo();
    return 0;
}
