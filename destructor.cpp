/*************************************************************************
	> File Name: destructor.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月28日 星期二 21时02分40秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    Student(string name,int age):m_strName("answer"),m_iAge(22)
    Student(const Student &stu);
    ~Student();
    private:
    string m_strName;
    int m_iAge;
};
  
Student::Student(string name,int age)
{
    cout<<"初始化列表"<<endl;
}
Student::Student(const Student &stu)
{
    cout<<"拷贝构造函数"<<endl;
}
Student::~Student()
{
    cout<<"析构函数"<<endl;
}

int main(void)
{
    Student s1;
    Student s2(s1);
    return 0;
}
