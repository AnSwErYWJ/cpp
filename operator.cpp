/*************************************************************************
	> File Name: operator.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年09月21日 星期一 21时09分20秒
 ************************************************************************/

/*
 *运算符重载
 */

#include<iostream>
using namespace std;

class Coordinate
{
    friend Coordinate &operator-(Coordinate &c);
    friend Coordinate operator+(const Coordinate &c1,const Coordinate &c2)
    {
        Coordinate temp(0,0);
        temp.m_iX=c1.m_iX+c2.m_iX;
        temp.m_iY=c1.m_iY+c2.m_iY;
        return temp;
    }
    friend ostream &operator<<(ostream &output,Coordinate &coor)
    {
        output<<coor.m_iX<<","<<coor.m_iY;
        return output;
    }
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

    //+成员函数重载
    //Coordinate operator+(const Coordinate &c)
    //{
    //    Coordinate temp(0,0);
    //    temp.m_iX=this->m_iX+c.m_iX;
    //    temp.m_iY=this->m_iY+c.m_iY;
    //    return temp;
    //}

    int operator[](int index)
    {
        if(0==index)
        return m_iX;
        if(1==index)
        return m_iY;
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
    Coordinate coor2(2,4);
    Coordinate coor3(0,0);
    //cout<<coor1.getX()<<","<<coor1.getY()<<endl;
    //-coor1;//coor1.operator-()
    //coor1++;
    
    //coor3=coor1+coor2;

   // cout<<coor3.getX()<<","<<coor3.getY()<<endl;
    //cout<<coor3<<endl;

    cout<<coor1[1]<<endl;

    return 0;
}
