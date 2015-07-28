/*************************************************************************
	> File Name: constructor.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月28日 星期二 20时09分38秒
 ************************************************************************/

/*
 *构造函数
 */
#include<iostream>
#include<string>
using namespace std;

class Teacher
{
    public:
    Teacher();//无参构造函数
    Teacher(string name,int age=2);//有参构造函数,默认值在声明时写。
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();
    private:
    string m_strName;
    int m_iAge;

};

Teacher::Teacher()
{
    m_strName="answer";
    m_iAge=22;
    cout<<"无参构造函数"<<endl;
}

/*初始化列表默认值在定义时写*/
Teacher::Teacher(string name,int age):m_strName("hello"),m_iAge(3)
{
}

void Teacher::setName(string _name)
{
    m_strName=_name;
}

string Teacher::getName()
{
    return m_strName;
}

void Teacher::setAge(int _age)
{
    m_iAge=_age;
}

int Teacher::getAge()
{
    return m_iAge;
}

int main(void)
{
    Teacher t1;
    Teacher t2("yuan");
    cout<<t1.getName()<<" "<<t1.getAge()<<endl;
    cout<<t2.getName()<<" "<<t2.getAge()<<endl;
    return 0;
}
