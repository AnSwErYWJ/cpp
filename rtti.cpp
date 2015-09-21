/*************************************************************************
	> File Name: rtti.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年09月21日 星期一 17时43分33秒
 ************************************************************************/

/*
 *运行时限制
 */

#include<iostream>
#include<string>
#include<typeinfo>

using namespace std;

class Flyable
{
    public:
    virtual void takeoff() = 0;//纯虚函数
    virtual void land() = 0;
};

class Plane:public Flyable
{
    public:
    void carry(){cout<<"Plane-carry"<<endl;}
    virtual void takeoff(){cout<<"Plane-takeoff"<<endl;}
    virtual void land(){cout<<"Plane-land"<<endl;}
};

class Bird:public Flyable
{
    public:
    void foraging(){cout<<"Bird-foraging"<<endl;}
    virtual void takeoff(){cout<<"Bird-takeoff"<<endl;}
    virtual void land(){cout<<"Bird-land"<<endl;}
};

void doSomething(Flyable *obj)
{
    cout<<typeid(*obj).name()<<endl;//name 方法
    obj->takeoff();
    if(typeid(*obj)==typeid(Bird))
    {
        Bird *bird = dynamic_cast<Bird *>(obj);
        bird->foraging();
    }
    if(typeid(*obj)==typeid(Plane))
    {
        Plane *plane=dynamic_cast<Plane *>(obj);//转化
        plane->carry();
    }
    obj->land();
}

int main(void)
{
    Bird b;
    doSomething(&b);
    cout<<"-----------------"<<endl;
    Plane p;
    doSomething(&p);

    cout<<"-----------------"<<endl;
    Flyable *f=new Bird();
    cout<<typeid(f).name()<<endl;
    cout<<typeid(*f).name()<<endl;
    
    return 0;
}
