/*************************************************************************
	> File Name: define_out_class.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月28日 星期二 20时09分38秒
 ************************************************************************/

/*
 *类外定义
 */
#include<iostream>
#include<string>
using namespace std;

class Teacher
{
    public:
    void setName(string _name);
    string getName();
    void setGender(string _gender);
    string getGender();
    void setAge(int _age);
    int getAge();
    void teach();
    private:
    string m_strName;
    string m_strGender;
    int m_iAge;

};

void Teacher::setName(string _name)
{
    m_strName=_name;
}

string Teacher::getName()
{
    return m_strName;
}

void Teacher::setGender(string _gender)
{
    m_strGender=_gender;
}

string Teacher::getGender()
{
    return m_strGender;
}

void Teacher::setAge(int _age)
{
    m_iAge=_age;
}

int Teacher::getAge()
{
    return m_iAge;
}

void Teacher::teach()
{
    cout<<"Now,teaching"<<endl;
}

int main(void)
{
    Teacher t;
    t.setName("answer");
    t.setGender("男");
    t.setAge(22);
    cout<<t.getName()<<" "<<t.getAge()<<" "<<t.getGender()<<endl;
    t.teach();
    return 0;
}
