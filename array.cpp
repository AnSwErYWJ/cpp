/*************************************************************************
	> File Name: array.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年09月16日 星期三 12时28分00秒
 ************************************************************************/

/*
 *浅拷贝：值的复制
 */

#include<iostream>
using namespace std;

class Array
{
    public:
    Array();
    Array(const Array &arr);
    ~Array();
    void setCount(int count);
    int getCount();

    private:
    int m_iCount;
};

Array::Array()
{
    cout<<"Array"<<endl;
}

Array::Array(const Array &arr)
{
    m_iCount = arr.m_iCount;
    cout<<"Array &"<<endl;
}

Array::~Array()
{  
    cout << "~Array" << endl;
}

void Array::setCount(int count)
{
    m_iCount = count;
}

int Array::getCount()
{
    return m_iCount;
}

int main(void)
{
    Array arr1;

    arr1.setCount(5);
    
    Array arr2(arr1);
    cout<<"arr2:"<<arr2.getCount()<<endl;
   
    return 0;
}
