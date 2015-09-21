/*************************************************************************
	> File Name: operator.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年09月21日 星期一 21时09分20秒
 ************************************************************************/

/*
 *一元运算符重载
 */

#include<iostream>
using namespace std;

class Coordinate
{
    friend Coordinate &operator-(Coordinate &c);
    public:
    Coordinate(int x,int y)
    {
        m_iX=x;
        m_iY=y;
    }
   
    //成员函数重载
    //Coordinate &operator-()
    //{
    //    m_iX=-m_iX;
    //    this->m_iY=-this->m_iY;
    //    return *this;
    //}
  
    //前置++
    Coordinate &operator++()
    {
        m_iX++;
        m_iY++;
        return *this;
    }

    //后置++
    Coordinate operator++(int)
    {
        Coordinate old(*this);
        this->m_iX++;
        this->m_iY++;
        return old;
    }

    int getX(){return m_iX;}
    int getY(){return m_iY;}
    private:
    int m_iX;
    int m_iY;
};

//友元函数重载
Coordinate &operator-(Coordinate &c)
{
    c.m_iX=-c.m_iX;
    c.m_iY=-c.m_iY;
    return c;
}

int main(void)
{
    Coordinate coor1(1,3);
    cout<<coor1.getX()<<","<<coor1.getY()<<endl;
    //-coor1;//coor1.operator-()
    coor1++;
    cout<<coor1.getX()<<","<<coor1.getY()<<endl;

    return 0;
}
