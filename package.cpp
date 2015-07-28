/*************************************************************************
	> File Name: package.cpp
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月28日 星期二 14时07分14秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    void setName(string _name)
    {
        m_strName=_name;
    }
    string getName()
    {
        return m_strName;
    }
    void setGender(string _gender)
    {
        m_strGender=_gender;
    }
    string getGender()
    {
        return m_strGender;
    }
    void initScore()
    {
        m_iScore=0;
    }
    void study(int _score)
    {
        m_iScore=_score;
    }
    int getScore()
    {
        return m_iScore;
    }
    private:
    string m_strName;
    string m_strGender;
    int m_iScore;
};

int main(void)
{
   Student stu;
    stu.setName("answer");
    stu.setGender("男");
    stu.initScore();
    stu.study(10);
    cout<<stu.getName()<<" "<<stu.getGender()<<" "<<stu.getScore()<<endl;
    
    return 0;
}
