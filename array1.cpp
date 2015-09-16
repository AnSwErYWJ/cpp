/*************************************************************************
	> File Name: array1.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年09月16日 星期三 12时28分00秒
 ************************************************************************/

/*
 *深拷贝
 */

#include<iostream>
using namespace std;

class Array
{
    public:
    Array(int count);
    Array(const Array &arr);
    ~Array();
    void setCount(int count);
    int getCount();
    void printAddr();
    void printArr();

    private:
    int m_iCount;
    int *m_pArr;
};

Array::Array(int count)
{
    int i;
    m_iCount = count;
    m_pArr = new int[m_iCount];

    for(i=0;i<m_iCount;i++)
    {
        m_pArr[i]=i;
    }
    cout<<"Array"<<endl;
}

Array::Array(const Array &arr)
{
    int i;
    m_iCount = arr.m_iCount;
    m_pArr = new int[m_iCount];
    for(i=0;i<m_iCount;i++)
    {
        m_pArr[i] = arr.m_pArr[i];
    }
    cout<<"Array &"<<endl;
}

Array::~Array()
{  
    delete []m_pArr;
    m_pArr = NULL;
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

void Array::printAddr()
{
    cout<<"m_pArr:"<<m_pArr<<endl;
}

void Array::printArr()
{
    int i=0;
    for(i=0;i<m_iCount;i++)
    {
        cout<<m_pArr[i]<<endl;
    }
}

int main(void)
{
    Array arr1(5);
    Array arr2(arr1);

    arr1.printAddr();
    arr2.printAddr();
   
    arr1.printArr();
    arr2.printArr();

    return 0;
}
